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
                struct position_visibility : types::property_base<"position-visibility">, constants::global_values<position_visibility>
                {
                    using super_property = types::property_base<"position-visibility">;

                    position_visibility() = delete;
                    position_visibility(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant always{key, "always"};
                    inline static constexpr types::property_constant anchors_visible{key, "anchors-visible"};
                    inline static constexpr types::property_constant no_overflow{key, "no-overflow"};
                };
            }
        }
    }
}
