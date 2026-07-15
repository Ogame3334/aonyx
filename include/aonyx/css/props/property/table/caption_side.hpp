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
                struct caption_side : types::property_base<"caption-side">, constants::global_values<caption_side>
                {
                    using super_property = types::property_base<"caption-side">;

                    caption_side() = delete;
                    caption_side(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view top = "top";
                    inline static constexpr std::string_view bottom = "bottom";
                    inline static constexpr std::string_view block_start = "block-start";
                    inline static constexpr std::string_view block_end = "block-end";
                    inline static constexpr std::string_view inline_start = "inline-start";
                    inline static constexpr std::string_view inline_end = "inline-end";
                };
            }
        }
    }
}
