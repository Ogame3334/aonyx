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
                struct border_inline_start : types::property_base<"border-inline-start">, constants::global_values<border_inline_start>
                {
                    using super_property = types::property_base<"border-inline-start">;

                    border_inline_start() = delete;
                    border_inline_start(std::string_view style) : super_property(std::string(style)) {}
                    border_inline_start(util::numerical width, std::string_view style) : super_property(std::format("{} {}", width, style)) {}
                    border_inline_start(std::string_view style, std::string_view color) : super_property(std::format("{} {}", style, color)) {}
                    border_inline_start(util::numerical width, std::string_view style, std::string_view color) : super_property(std::format("{} {} {}", width, style, color)) {}
                };
            }
        }
    }
}
