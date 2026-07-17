/** @brief Core type-traits concepts for the aonyx utility library. */
#pragma once

#include <concepts>
#include <type_traits>

namespace aonyx
{
namespace util
{
/** @brief Checks if a type @p T is the same as @p U after removing cv-qualifiers and references. */
template <class T, class U>
concept like = std::same_as<std::remove_cvref_t<T>, U>;
} // namespace util
} // namespace aonyx
