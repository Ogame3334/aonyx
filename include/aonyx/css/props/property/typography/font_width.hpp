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
                struct font_width : types::property_base<"font-width">, constants::global_values<font_width>
                {
                    using super_property = types::property_base<"font-width">;

                    font_width() = delete;
                    font_width(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view ultra_condensed = "ultra-condensed";
                    inline static constexpr std::string_view extra_condensed = "extra-condensed";
                    inline static constexpr std::string_view condensed = "condensed";
                    inline static constexpr std::string_view semi_condensed = "semi-condensed";
                    inline static constexpr std::string_view normal = "normal";
                    inline static constexpr std::string_view semi_expanded = "semi-expanded";
                    inline static constexpr std::string_view expanded = "expanded";
                    inline static constexpr std::string_view extra_expanded = "extra-expanded";
                    inline static constexpr std::string_view ultra_expanded = "ultra-expanded";
                    inline static constexpr std::string_view wider = "wider";
                    inline static constexpr std::string_view narrower = "narrower";
                };
            }
        }
    }
}
