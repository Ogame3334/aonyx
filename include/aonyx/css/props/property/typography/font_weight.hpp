#pragma once

#include <string>
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
                struct font_weight : types::property_base<"font-weight">, constants::global_values<font_weight>
                {
                    using super_property = types::property_base<"font-weight">;

                    font_weight() = delete;
                    font_weight(util::numerical v) : super_property(v.to_string()) {}
                    font_weight(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view normal = "normal";
                    inline static constexpr std::string_view bold = "bold";
                    inline static constexpr std::string_view bolder = "bolder";
                    inline static constexpr std::string_view lighter = "lighter";
                    inline static constexpr std::string_view thin = "100";
                    inline static constexpr std::string_view extra_light = "200";
                    inline static constexpr std::string_view light = "300";
                    inline static constexpr std::string_view medium_weight = "400";
                    inline static constexpr std::string_view medium = "500";
                    inline static constexpr std::string_view semi_bold = "600";
                    inline static constexpr std::string_view bold_value = "700";
                    inline static constexpr std::string_view extra_bold = "800";
                    inline static constexpr std::string_view black = "900";
                };
            }
        }
    }
}
