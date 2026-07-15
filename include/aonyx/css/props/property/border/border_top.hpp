#pragma once

#include <string>
#include <format>
#include <string_view>

#include <aonyx/css/props/types/property.hpp>
#include <aonyx/css/props/constants/global_values.hpp>
#include <aonyx/util/numerical.hpp>

namespace aonyx
{
    namespace css
    {
        namespace props
        {
            namespace property
            {
                struct border_top : types::property_base<"border-top">, constants::global_values<border_top>
                {
                    using super_property = types::property_base<"border-top">;

                    border_top() = delete;
                    border_top(std::string_view style) : super_property(std::string(style)) {}
                    border_top(std::string_view width, std::string_view style) : super_property(std::format("{} {}", width, style)) {}
                    border_top(util::numerical width, std::string_view style) : super_property(std::format("{} {}", width, style)) {}
                    border_top(std::string_view style, std::string_view color) : super_property(std::format("{} {}", style, color)) {}
                    border_top(std::string_view width, std::string_view style, std::string_view color) : super_property(std::format("{} {} {}", width, style, color)) {}
                    border_top(util::numerical width, std::string_view style, std::string_view color) : super_property(std::format("{} {} {}", width, style, color)) {}
                };
            }
        }
    }
}
