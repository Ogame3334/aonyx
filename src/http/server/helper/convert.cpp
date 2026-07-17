/** @brief Implementations of type converters between aonyx types and Boost.Beast types. */

#include "http/server/helper/convert.hpp"
#include <cstdio>

namespace aonyx
{
    namespace impl
    {
        namespace http
        {
            namespace helper
            {
                namespace
                {
                    std::string url_decode(std::string_view str)
                    {
                        std::string decoded;
                        decoded.reserve(str.length());
                        for (size_t i = 0; i < str.length(); ++i)
                        {
                            if (str[i] == '%')
                            {
                                if (i + 2 < str.length())
                                {
                                    int value;
                                    if (std::sscanf(str.data() + i + 1, "%2x", &value) == 1)
                                    {
                                        decoded += static_cast<char>(value);
                                        i += 2;
                                    }
                                    else
                                    {
                                        decoded += '%';
                                    }
                                }
                                else
                                {
                                    decoded += '%';
                                }
                            }
                            else if (str[i] == '+')
                            {
                                decoded += ' ';
                            }
                            else
                            {
                                decoded += str[i];
                            }
                        }
                        return decoded;
                    }
                }

                namespace method
                {
                    /** @brief Convert an aonyx HTTP method to a Boost.Beast verb.
                     *  @param method The aonyx method.
                     *  @return The corresponding Boost.Beast verb. */
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
                    /** @brief Convert a Boost.Beast verb to an aonyx HTTP method.
                     *  @param verb The Boost.Beast verb.
                     *  @return The corresponding aonyx method. */
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
                    /** @brief Convert an aonyx request to a Boost.Beast request.
                     *  @param req The aonyx request.
                     *  @return The corresponding Boost.Beast HTTP request. */
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
                    /** @brief Convert a Boost.Beast request to an aonyx request.
                     *  @param req The Boost.Beast request.
                     *  @return The corresponding aonyx request. */
                    aonyx_request convert(const boost_request &req)
                    {
                        aonyx_request result;

                        result.method = method::convert(req.method());
                        
                        auto target = req.target();
                        auto query_pos = target.find('?');
                        if (query_pos != std::string_view::npos)
                        {
                            result.path = url_decode(target.substr(0, query_pos));
                            
                            auto query_string = target.substr(query_pos + 1);
                            size_t start = 0;
                            while (start < query_string.length())
                            {
                                size_t end = query_string.find('&', start);
                                if (end == std::string_view::npos)
                                {
                                    end = query_string.length();
                                }
                                
                                auto pair = query_string.substr(start, end - start);
                                size_t eq_pos = pair.find('=');
                                if (eq_pos != std::string_view::npos)
                                {
                                    auto key = url_decode(pair.substr(0, eq_pos));
                                    auto val = url_decode(pair.substr(eq_pos + 1));
                                    result.queries[key] = val;
                                }
                                else if (!pair.empty())
                                {
                                    result.queries[url_decode(pair)] = "";
                                }
                                
                                start = end + 1;
                            }
                        }
                        else
                        {
                            result.path = url_decode(target);
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
                    /** @brief Convert an aonyx response to a Boost.Beast response.
                     *  @param res The aonyx response.
                     *  @return The corresponding Boost.Beast HTTP response. */
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
                    /** @brief Convert a Boost.Beast response to an aonyx response.
                     *  @param res The Boost.Beast response.
                     *  @return The corresponding aonyx response. */
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
