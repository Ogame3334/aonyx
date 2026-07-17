/** @brief Factory function to wrap a callable into an inner_handler_t with error handling. */
#pragma once

#include <exception>

#include <aonyx/http/request.hpp>
#include <aonyx/util/handler/call_handler.hpp>
#include <aonyx/util/handler/handler.hpp>

namespace aonyx
{
namespace util
{
/** @brief Wrap a callable @p f into an inner_handler_t with exception-to-HTTP-error mapping.
 *  @tparam F The callable type.
 *  @param f The callable to wrap.
 *  @return An inner_handler_t that catches std::invalid_argument -> 400,
 *          std::out_of_range -> 400, and any other exception -> 500. */
template <class F>
inner_handler_t make_handler(F&& f)
{
    return [fn = std::forward<F>(f)](
               const http::request& req, http::response& res, const util::inner_handler_params_t& params)
    {
        try
        {
            auto result = details::call_handler(fn, req, res, params);

            if (not result)
            {
                res.status = 500;
                res.body = "500 Internal Server Error";
                res.headers["Content-Type"] = "text/html";

                return;
            }

            return;
        }
        catch (const std::invalid_argument&)
        {
            res.status = 400;
            res.body = "400 Bad Request";
            res.headers["Content-Type"] = "text/html";

            return;
        }
        catch (const std::out_of_range&)
        {
            res.status = 400;
            res.body = "400 Bad Request";
            res.headers["Content-Type"] = "text/html";

            return;
        }
        catch (...)
        {
            res.status = 500;
            res.body = "500 Internal Server Error";
            res.headers["Content-Type"] = "text/html";

            return;
        }
    };
}
} // namespace util
} // namespace aonyx
