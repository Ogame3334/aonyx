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
                struct paint_order : types::property_base<"paint-order">, constants::global_values<paint_order>
                {
                    using super_property = types::property_base<"paint-order">;

                    paint_order() = delete;
                    paint_order(std::string_view v) : super_property(std::string(v)) {}
                    paint_order(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    paint_order(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}

                    inline static constexpr std::string_view normal = "normal";
                    inline static constexpr std::string_view fill = "fill";
                    inline static constexpr std::string_view stroke = "stroke";
                    inline static constexpr std::string_view markers = "markers";
                };
            }
        }
    }
}
