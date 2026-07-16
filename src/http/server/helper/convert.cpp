#include "http/server/helper/convert.hpp"

namespace aonyx
{
    namespace impl
    {
        namespace http
        {
            namespace helper
            {
                namespace method
                {
                    boost_verb convert(const aonyx_method method)
                    {
                        switch (method)
                        {
                        case aonyx_method::get:
                            return boost_verb::get;
                        case aonyx_method::post:
                            return boost_verb::post;
                        case aonyx_method::put:
                            return boost_verb::put;
                        case aonyx_method::delete_:
                            return boost_verb::delete_;
                        default:
                            return boost_verb::unknown;
                        }
                    }
                    aonyx_method convert(const boost_verb verb)
                    {
                        switch (verb)
                        {
                        case boost_verb::get:
                            return aonyx_method::get;
                        case boost_verb::post:
                            return aonyx_method::post;
                        case boost_verb::put:
                            return aonyx_method::put;
                        case boost_verb::delete_:
                            return aonyx_method::delete_;
                        default:
                            return aonyx_method::unknown;
                        }
                    }
                }

                namespace request
                {
                    boost_request convert(const aonyx_request &req)
                    {
                        namespace http = boost::beast::http;

                        http::request<http::string_body> result;

                        result.method(method::convert(req.method));
                        result.target(req.path);
                        result.body() = req.body;

                        for (const auto &[key, value] : req.headers)
                        {
                            result.set(key, value);
                        }

                        result.prepare_payload();

                        return result;
                    }
                    aonyx_request convert(const boost_request &req)
                    {
                        aonyx_request result;

                        result.method = method::convert(req.method());
                        
                        auto target = req.target();
                        auto query_pos = target.find('?');
                        if (query_pos != std::string_view::npos)
                        {
                            result.path = std::string(target.substr(0, query_pos));
                        }
                        else
                        {
                            result.path = std::string(target);
                        }
                        
                        result.body = req.body();

                        for (const auto &field : req)
                        {
                            result.headers.emplace(
                                std::string(field.name_string()),
                                std::string(field.value()));
                        }

                        return result;
                    }
                }

                namespace response
                {
                    boost_response convert(const aonyx_response &res)
                    {
                        namespace http = boost::beast::http;

                        boost_response result;

                        result.result(
                            static_cast<http::status>(res.status));

                        result.body() = res.body;

                        for (const auto &[key, value] : res.headers)
                        {
                            result.set(key, value);
                        }

                        result.prepare_payload();

                        return result;
                    }
                    aonyx_response convert(const boost_response &res)
                    {
                        aonyx_response result;

                        result.status = static_cast<int>(res.result());

                        result.body = res.body();

                        for (const auto &field : res)
                        {
                            result.headers.emplace(
                                std::string(field.name_string()),
                                std::string(field.value()));
                        }

                        return result;
                    }
                }
            }
        }
    }
}
