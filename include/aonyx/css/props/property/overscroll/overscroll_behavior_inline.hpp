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
                struct overscroll_behavior_inline : types::property_base<"overscroll-behavior-inline">, constants::global_values<overscroll_behavior_inline>
                {
                    using super_property = types::property_base<"overscroll-behavior-inline">;

                    overscroll_behavior_inline() = delete;
                    overscroll_behavior_inline(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant contain{key, "contain"};
                    inline static constexpr types::property_constant none{key, "none"};
                };
            }
        }
    }
}
