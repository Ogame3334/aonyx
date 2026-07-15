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
                struct offset_position : types::property_base<"offset-position">, constants::global_values<offset_position>
                {
                    using super_property = types::property_base<"offset-position">;

                    offset_position() = delete;
                    offset_position(std::string_view v) : super_property(std::string(v)) {}
                    offset_position(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view normal = "normal";
                };
            }
        }
    }
}
