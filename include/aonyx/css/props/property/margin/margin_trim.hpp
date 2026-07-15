#pragma once

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
                struct margin_trim : types::property_base<"margin-trim">, constants::global_values<margin_trim>
                {
                    using super_property = types::property_base<"margin-trim">;

                    margin_trim() = delete;
                    margin_trim(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view block = "block";
                    inline static constexpr std::string_view block_start = "block-start";
                    inline static constexpr std::string_view block_end = "block-end";
                    inline static constexpr std::string_view inline_ = "inline";
                    inline static constexpr std::string_view inline_start = "inline-start";
                    inline static constexpr std::string_view inline_end = "inline-end";
                };
            }
        }
    }
}
