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
                struct overscroll_behavior_x : types::property_base<"overscroll-behavior-x">, constants::global_values<overscroll_behavior_x>
                {
                    using super_property = types::property_base<"overscroll-behavior-x">;

                    overscroll_behavior_x() = delete;
                    overscroll_behavior_x(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant contain{key, "contain"};
                    inline static constexpr types::property_constant none{key, "none"};
                };
            }
        }
    }
}
