/** @brief Defines CSS global keyword constants (inherit, initial, revert, etc.). */

#pragma once

#include <aonyx/css/props/types/property.hpp>

namespace aonyx
{
    namespace css
    {
        namespace props
        {
            namespace constants
            {
                /**
                 * @brief Provides static constant members for CSS global keywords.
                 * @tparam T A property type whose `key` is used as the property name for each constant.
                 */
                template <typename T>
                struct global_values
                {
                    inline static constexpr types::property_constant inherit = {T::key, "inherit"};
                    inline static constexpr types::property_constant initial = {T::key, "initial"};
                    inline static constexpr types::property_constant revert = {T::key, "revert"};
                    inline static constexpr types::property_constant revert_layer = {T::key, "revert-layer"};
                    inline static constexpr types::property_constant unset = {T::key, "unset"};
                };
            }
        }
    }
}
