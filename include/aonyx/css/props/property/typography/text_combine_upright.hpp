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
                struct text_combine_upright : types::property_base<"text-combine-upright">, constants::global_values<text_combine_upright>
                {
                    using super_property = types::property_base<"text-combine-upright">;

                    text_combine_upright() = delete;
                    text_combine_upright(std::string_view v) : super_property(std::string(v)) {}
                    text_combine_upright(std::string_view v, std::string_view digits) : super_property(std::format("{} {}", v, digits)) {}

                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view all = "all";
                    inline static constexpr std::string_view digits = "digits";
                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view full_width = "full-width";
                    inline static constexpr std::string_view up = "up";
                    inline static constexpr std::string_view down = "down";
                    inline static constexpr std::string_view mixed = "mixed";
                    inline static constexpr std::string_view upright = "upright";
                    inline static constexpr std::string_view sideways = "sideways";
                    inline static constexpr std::string_view sideways_right = "sideways-right";
                };
            }
        }
    }
}
