/** @brief CSS property: justify-items
 *
 * justify-items CSS property.
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
                struct justify_items : types::property_base<"justify-items">, constants::global_values<justify_items>
                {
                    using super_property = types::property_base<"justify-items">;

                    justify_items() = delete;
                    justify_items(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant normal{key, "normal"};
                    inline static constexpr types::property_constant stretch{key, "stretch"};
                    inline static constexpr types::property_constant center{key, "center"};
                    inline static constexpr types::property_constant start{key, "start"};
                    inline static constexpr types::property_constant end{key, "end"};
                    inline static constexpr types::property_constant flex_start{key, "flex-start"};
                    inline static constexpr types::property_constant flex_end{key, "flex-end"};
                    inline static constexpr types::property_constant self_start{key, "self-start"};
                    inline static constexpr types::property_constant self_end{key, "self-end"};
                    inline static constexpr types::property_constant left{key, "left"};
                    inline static constexpr types::property_constant right{key, "right"};
                    inline static constexpr types::property_constant baseline{key, "baseline"};
                    inline static constexpr types::property_constant safe_center{key, "safe center"};
                    inline static constexpr types::property_constant unsafe_center{key, "unsafe center"};
                    inline static constexpr types::property_constant legacy_left{key, "legacy left"};
                    inline static constexpr types::property_constant legacy_right{key, "legacy right"};
                    inline static constexpr types::property_constant legacy_center{key, "legacy center"};
                };
            }
        }
    }
}
