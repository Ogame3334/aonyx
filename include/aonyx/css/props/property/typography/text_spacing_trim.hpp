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
                struct text_spacing_trim : types::property_base<"text-spacing-trim">, constants::global_values<text_spacing_trim>
                {
                    using super_property = types::property_base<"text-spacing-trim">;

                    text_spacing_trim() = delete;
                    text_spacing_trim(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view normal = "normal";
                    inline static constexpr std::string_view space_all = "space-all";
                    inline static constexpr std::string_view trim_start = "trim-start";
                    inline static constexpr std::string_view trim_end = "trim-end";
                    inline static constexpr std::string_view trim_start_end = "trim-start-end";
                    inline static constexpr std::string_view trim_all = "trim-all";
                };
            }
        }
    }
}
