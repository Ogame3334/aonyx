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
                struct font_variant_east_asian : types::property_base<"font-variant-east-asian">, constants::global_values<font_variant_east_asian>
                {
                    using super_property = types::property_base<"font-variant-east-asian">;

                    font_variant_east_asian() = delete;
                    font_variant_east_asian(std::string_view v) : super_property(std::string(v)) {}
                    font_variant_east_asian(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    font_variant_east_asian(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}

                    inline static constexpr std::string_view normal = "normal";
                    inline static constexpr std::string_view jis78 = "jis78";
                    inline static constexpr std::string_view jis83 = "jis83";
                    inline static constexpr std::string_view jis90 = "jis90";
                    inline static constexpr std::string_view jis04 = "jis04";
                    inline static constexpr std::string_view simplified = "simplified";
                    inline static constexpr std::string_view traditional = "traditional";
                    inline static constexpr std::string_view full_width = "full-width";
                    inline static constexpr std::string_view proportional_width = "proportional-width";
                    inline static constexpr std::string_view ruby = "ruby";
                };
            }
        }
    }
}
