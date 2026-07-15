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
                struct overscroll_behavior_y : types::property_base<"overscroll-behavior-y">, constants::global_values<overscroll_behavior_y>
                {
                    using super_property = types::property_base<"overscroll-behavior-y">;

                    overscroll_behavior_y() = delete;
                    overscroll_behavior_y(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view contain = "contain";
                    inline static constexpr std::string_view none = "none";
                };
            }
        }
    }
}
