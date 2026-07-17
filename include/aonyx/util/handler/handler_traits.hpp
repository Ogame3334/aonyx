/** @brief Traits for extracting type information from handler signatures. */
#pragma once

#include <functional>
#include <tuple>
#include <type_traits>

#include <aonyx/http/request.hpp>
#include <aonyx/http/response.hpp>

namespace aonyx
{
namespace util
{
/** @brief Primary template (undefined) for handler trait extraction. */
template <class F>
struct handler_traits;

/** @brief Specialization for handler function types. */
template <class R, class... Args>
struct handler_traits<R(const http::request&, http::response&, Args...)>
{
    using result_type = R;
    using args_type_tuple = std::tuple<Args...>;
};

/** @brief Specialization for handler function pointers. */
template <class R, class... Args>
struct handler_traits<R (*)(const http::request&, http::response&, Args...)>
    : handler_traits<R(const http::request&, http::response&, Args...)>
{
};

/** @brief Specialization for std::function handler wrappers. */
template <class R, class... Args>
struct handler_traits<std::function<R(const http::request&, http::response&, Args...)>>
    : handler_traits<R(const http::request&, http::response&, Args...)>
{
};

/** @brief Alias for the result type of a handler. */
template <class F>
using handler_result_t = typename handler_traits<F>::result_type;

/** @brief Alias for the extra handler arguments tuple type. */
template <class F>
using handler_args_tuple_t = typename handler_traits<F>::args_type_tuple;

/** @brief Number of extra handler arguments (type wrapper). */
template <class F>
struct handler_args_size : std::tuple_size<handler_args_tuple_t<F>>
{
};

/** @brief Number of extra handler arguments (value template). */
template <class F>
static constexpr std::size_t handler_args_size_v = handler_args_size<F>::value;
} // namespace util
} // namespace aonyx
