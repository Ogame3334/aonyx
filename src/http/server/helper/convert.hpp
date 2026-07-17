/** @brief Declarations of type converters between aonyx types and Boost.Beast types. */

#pragma once

#include <string>
#include <aonyx/http/request.hpp>
#include <aonyx/http/response.hpp>
#include <aonyx/http/method.hpp>
#include <boost/beast/http/verb.hpp>
#include <boost/beast/http/message.hpp>
#include <boost/beast/http/string_body.hpp>

namespace aonyx
{
    namespace impl
    {
        namespace http
        {
            namespace helper
            {
                using boost_verb = boost::beast::http::verb;
                using aonyx_method = aonyx::http::method;

                namespace method
                {
                    /** @brief Convert aonyx::http::method to boost::beast::http::verb. */
                    boost_verb convert(const aonyx_method method);
                    /** @brief Convert boost::beast::http::verb to aonyx::http::method. */
                    aonyx_method convert(const boost_verb verb);
                }

                using boost_request = boost::beast::http::request<boost::beast::http::string_body>;
                using aonyx_request = aonyx::http::request;

                namespace request
                {
                    /** @brief Convert aonyx::http::request to boost::beast::http::request. */
                    boost_request convert(const aonyx_request &req);
                    /** @brief Convert boost::beast::http::request to aonyx::http::request. */
                    aonyx_request convert(const boost_request &req);
                }

                using boost_response = boost::beast::http::response<boost::beast::http::string_body>;
                using aonyx_response = aonyx::http::response;

                namespace response
                {
                    /** @brief Convert aonyx::http::response to boost::beast::http::response. */
                    boost_response convert(const aonyx_response &res);
                    /** @brief Convert boost::beast::http::response to aonyx::http::response. */
                    aonyx_response convert(const boost_response &res);
                }
            }
        }
    }
}
