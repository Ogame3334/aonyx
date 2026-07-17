#include <aonyx/http/mime_types.hpp>
#include <aonyx/http/request.hpp>
#include <aonyx/http/response.hpp>
#include <aonyx/http/server/serve_static.hpp>
#include <filesystem>
#include <fstream>

namespace aonyx::http
{
middleware_t make_serve_static(const std::string& prefix, const std::string& root_dir, serve_static_options opts)
{
    return [prefix, root_dir, opts = std::move(opts)](const request& req, response& res, next_t next)
    {
        namespace fs = std::filesystem;

        std::string_view rel = req.path;
        rel.remove_prefix(prefix.size());
        if (!rel.empty() && rel.front() == '/')
            rel.remove_prefix(1);

        std::string rel_path(rel);

        if (rel_path.find("..") != std::string::npos)
        {
            next();
            return;
        }

        if (rel_path.empty() || rel_path.back() == '/')
            rel_path += opts.index;

        if (!opts.dotfiles)
        {
            auto filename = fs::path(rel_path).filename().string();
            if (!filename.empty() && filename.front() == '.')
            {
                next();
                return;
            }
        }

        fs::path full = fs::path(root_dir) / rel_path;

        std::error_code ec;
        if (fs::is_directory(full, ec))
        {
            if (!rel_path.empty() && rel_path.back() != '/')
                rel_path += "/";
            rel_path += opts.index;
            full = fs::path(root_dir) / rel_path;
        }

        if (!fs::is_regular_file(full, ec))
        {
            next();
            return;
        }

        std::ifstream file(full, std::ios::binary);
        if (!file)
        {
            next();
            return;
        }

        std::string content((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());

        std::string ext = fs::path(rel_path).extension().string();
        if (!ext.empty() && ext.front() == '.')
            ext = ext.substr(1);

        res.status = 200;
        res.body = std::move(content);
        res.headers["Content-Type"] = std::string(mime_type(ext));
        if (!opts.cache_control.empty())
            res.headers["Cache-Control"] = opts.cache_control;
    };
}
} // namespace aonyx::http
