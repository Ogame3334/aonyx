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
                struct text_align_last : types::property_base<"text-align-last">, constants::global_values<text_align_last>
                {
                    using super_property = types::property_base<"text-align-last">;

                    text_align_last() = delete;
                    text_align_last(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view left = "left";
                    inline static constexpr std::string_view right = "right";
                    inline static constexpr std::string_view center = "center";
                    inline static constexpr std::string_view justify = "justify";
                    inline static constexpr std::string_view start = "start";
                    inline static constexpr std::string_view end = "end";
                };
            }
        }
    }
}
