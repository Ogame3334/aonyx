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
                struct text_box_edge : types::property_base<"text-box-edge">, constants::global_values<text_box_edge>
                {
                    using super_property = types::property_base<"text-box-edge">;

                    text_box_edge() = delete;
                    text_box_edge(std::string_view over_under) : super_property(std::string(over_under)) {}
                    text_box_edge(std::string_view over, std::string_view under) : super_property(std::format("{} {}", over, under)) {}

                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view cap = "cap";
                    inline static constexpr std::string_view ex = "ex";
                    inline static constexpr std::string_view alphabetic = "alphabetic";
                    inline static constexpr std::string_view text = "text";
                    inline static constexpr std::string_view overshoot = "overshoot";
                };
            }
        }
    }
}
