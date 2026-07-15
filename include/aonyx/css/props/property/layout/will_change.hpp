#pragma once

#include <string>
#include <format>
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
                struct will_change : types::property_base<"will-change">, constants::global_values<will_change>
                {
                    using super_property = types::property_base<"will-change">;

                    will_change() = delete;
                    will_change(std::string_view v) : super_property(std::string(v)) {}
                    will_change(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                };
            }
        }
    }
}
