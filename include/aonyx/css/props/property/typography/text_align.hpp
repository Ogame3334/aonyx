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
                struct text_align : types::property_base<"text-align">, constants::global_values<text_align>
                {
                    using super_property = types::property_base<"text-align">;

                    text_align() = delete;
                    text_align(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view left = "left";
                    inline static constexpr std::string_view right = "right";
                    inline static constexpr std::string_view center = "center";
                    inline static constexpr std::string_view justify = "justify";
                    inline static constexpr std::string_view start = "start";
                    inline static constexpr std::string_view end = "end";
                    inline static constexpr std::string_view match_parent = "match-parent";
                    inline static constexpr std::string_view justify_all = "justify-all";
                };
            }
        }
    }
}
