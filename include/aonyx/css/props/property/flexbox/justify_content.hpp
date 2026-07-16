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
                struct justify_content : types::property_base<"justify-content">, constants::global_values<justify_content>
                {
                    using super_property = types::property_base<"justify-content">;

                    justify_content() = delete;
                    justify_content(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant normal{key, "normal"};
                    inline static constexpr types::property_constant stretch{key, "stretch"};
                    inline static constexpr types::property_constant center{key, "center"};
                    inline static constexpr types::property_constant start{key, "start"};
                    inline static constexpr types::property_constant end{key, "end"};
                    inline static constexpr types::property_constant flex_start{key, "flex-start"};
                    inline static constexpr types::property_constant flex_end{key, "flex-end"};
                    inline static constexpr types::property_constant space_between{key, "space-between"};
                    inline static constexpr types::property_constant space_around{key, "space-around"};
                    inline static constexpr types::property_constant space_evenly{key, "space-evenly"};
                    inline static constexpr types::property_constant safe_center{key, "safe center"};
                    inline static constexpr types::property_constant unsafe_center{key, "unsafe center"};
                };
            }
        }
    }
}
