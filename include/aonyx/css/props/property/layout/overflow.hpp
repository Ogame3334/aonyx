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
                struct overflow : types::property_base<"overflow">, constants::global_values<overflow>
                {
                    using super_property = types::property_base<"overflow">;

                    overflow() = delete;
                    overflow(std::string_view v) : super_property(std::string(v)) {}
                    overflow(std::string_view x, std::string_view y) : super_property(std::format("{} {}", x, y)) {}

                    inline static constexpr std::string_view visible = "visible";
                    inline static constexpr std::string_view hidden = "hidden";
                    inline static constexpr std::string_view clip = "clip";
                    inline static constexpr std::string_view scroll = "scroll";
                    inline static constexpr std::string_view auto_ = "auto";
                };
            }
        }
    }
}
