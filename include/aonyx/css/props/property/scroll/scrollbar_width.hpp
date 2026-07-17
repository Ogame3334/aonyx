/** @brief CSS property: scrollbar-width
 *
 * scrollbar-width CSS property.
 */
#pragma once

#include <string>
#include <string_view>

#include <aonyx/css/props/types/property.hpp>
#include <aonyx/css/props/constants/global_values.hpp>

namespace aonyx
{
    namespace css
    {
        namespace props
        {
            namespace property
            {
                struct scrollbar_width : types::property_base<"scrollbar-width">, constants::global_values<scrollbar_width>
                {
                    using super_property = types::property_base<"scrollbar-width">;

                    scrollbar_width() = delete;
                    scrollbar_width(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant thin{key, "thin"};
                    inline static constexpr types::property_constant none{key, "none"};
                };
            }
        }
    }
}
