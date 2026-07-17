/** @brief Core property type definitions used throughout the CSS property system. */

#pragma once

#include <string>
#include <string_view>
#include <concepts>

#include <aonyx/util/static_string.hpp>
#include <aonyx/util/concepts.hpp>

namespace aonyx
{
    namespace css
    {
        namespace props
        {
            namespace types
            {
                /**
                 * @brief Base type for a typed CSS property.
                 * @tparam Key A static_string representing the CSS property name.
                 */
                template <util::static_string Key>
                struct property_base
                {
                    static constexpr const char *key = Key.data;
                    std::string value;
                };

                /**
                 * @brief Represents a constant CSS property value (e.g., inherit, initial).
                 */
                struct property_constant
                {
                    const char *key;
                    std::string_view value;
                };
            }
            namespace concepts
            {
                /**
                 * @brief Concept requiring a type to have key and value members usable as CSS property entries.
                 */
                template <typename T>
                concept propertiable = requires(T t) {
                    { t.key } -> util::like<const char *>;
                    { t.value } -> util::like<std::conditional_t<std::is_same_v<T, props::types::property_constant>, std::string_view, std::string>>;
                };
            }
        }
    }
}
