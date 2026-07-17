/** @brief CSS property: align-items
 *
 * align-items CSS property.
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
                struct align_items : types::property_base<"align-items">, constants::global_values<align_items>
                {
                    using super_property = types::property_base<"align-items">;

                    align_items() = delete;
                    align_items(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant normal{key, "normal"};
                    inline static constexpr types::property_constant stretch{key, "stretch"};
                    inline static constexpr types::property_constant center{key, "center"};
                    inline static constexpr types::property_constant start{key, "start"};
                    inline static constexpr types::property_constant end{key, "end"};
                    inline static constexpr types::property_constant flex_start{key, "flex-start"};
                    inline static constexpr types::property_constant flex_end{key, "flex-end"};
                    inline static constexpr types::property_constant baseline{key, "baseline"};
                    inline static constexpr types::property_constant safe_center{key, "safe center"};
                    inline static constexpr types::property_constant unsafe_center{key, "unsafe center"};
                };
            }
        }
    }
}
