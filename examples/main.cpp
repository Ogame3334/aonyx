#include <aonyx.hpp>
#include <iostream>
#include <thread>

using namespace aonyx::dom;

html_node hoge()
{
    namespace css = aonyx::css;
    namespace props = css::props;

    auto prop_list = css::make_property_list(
        props::property::background_color(css::palette::lime),
        props::property::color(css::palette::red));

    // do something
    int num = 10;

    return div_(aonyx::dom::attrs::style(prop_list))(
        div_("a"),
        div_("<p>hoge!!</p>"),
        div_("c"));
}

void top(AONYX_PARAM(req, res))
{
    auto node =
        html(attribute{"lang", "en"})(
            head(),
            body(
                div_(
                    span("Hello, World!")),
                hoge()));

    res.body = node.to_string();
    res.status = 200;
    res.headers["Content-Type"] = "text/html";
}

void user_prof(AONYX_PARAM(req, res), int id)
{
    res.body = aonyx::dom::div_(std::to_string(id)).to_string();
    res.status = 200;
    res.headers["Content-Type"] = "text/html";
}

int main()
{
    aonyx::http::server server;
    auto &router = server.router();

    // グローバルミドルウェア: ロギング
    server.use([](AONYX_PARAM(req, res), aonyx::http::next_t next)
               {
        std::cout << "LOG: " << req.path << std::endl;
        next(); });

    // プレフィックスミドルウェア: /users 以下は認証必須
    server.use("/users", [](AONYX_PARAM(req, res), aonyx::http::next_t next)
               {
        auto it = req.headers.find("Authorization");
        if (it == req.headers.end() || it->second != "secret-token")
        {
            res.status = 401;
            res.body = "Unauthorized";
            res.headers["Content-Type"] = "text/html";
            return; // next() を呼ばずにショートサーキット
        }
        next(); });

    router.get("/top", top);
    router.get<int>("/users/{}", [](AONYX_PARAM(req, res), int id)
                    {
    res.body = aonyx::dom::div_(std::to_string(id)).to_string();
    res.status = 200;
    res.headers["Content-Type"] = "text/html"; });

    router.post<int>("/users/{}", [](AONYX_PARAM(req, res), int id)
                     {
        aonyx::json body;
        body["user_id"] = 100;
        body["user_name"] = "hoge";
        res.body = body.dump();
        res.status = 200;
        res.headers["Content-Type"] = "text/json"; });

    // 静的ファイル配信: ./public ディレクトリを /static で配信
    server.serve_static("/static", "./public");

    router.get("/heavy", [](AONYX_PARAM(req, res))
               { 
                std::this_thread::sleep_for(std::chrono::minutes(1));
                res.body = aonyx::dom::div_("heavy").to_string();
    res.status = 200;
    res.headers["Content-Type"] = "text/html"; });

    server.run();

    return 0;
}
