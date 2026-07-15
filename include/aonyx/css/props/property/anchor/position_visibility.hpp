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

                    inline static constexpr std::string_view always = "always";
                    inline static constexpr std::string_view anchors_visible = "anchors-visible";
                    inline static constexpr std::string_view no_overflow = "no-overflow";
                };
            }
        }
    }
}
