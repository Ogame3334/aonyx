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
                struct overscroll_behavior_block : types::property_base<"overscroll-behavior-block">, constants::global_values<overscroll_behavior_block>
                {
                    using super_property = types::property_base<"overscroll-behavior-block">;

                    overscroll_behavior_block() = delete;
                    overscroll_behavior_block(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view contain = "contain";
                    inline static constexpr std::string_view none = "none";
                };
            }
        }
    }
}
