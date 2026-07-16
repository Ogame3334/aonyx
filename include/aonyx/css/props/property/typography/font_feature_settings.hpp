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
                struct font_feature_settings : types::property_base<"font-feature-settings">, constants::global_values<font_feature_settings>
                {
                    using super_property = types::property_base<"font-feature-settings">;

                    font_feature_settings() = delete;
                    font_feature_settings(std::string_view v) : super_property(std::string(v)) {}
                    font_feature_settings(std::string_view tag, std::string_view value) : super_property(std::format("\"{}\" {}", tag, value)) {}
                    font_feature_settings(std::string_view tag1, std::string_view value1, std::string_view tag2, std::string_view value2) : super_property(std::format("\"{}\" {}, \"{}\" {}", tag1, value1, tag2, value2)) {}

                    inline static constexpr types::property_constant normal{key, "normal"};
                };
            }
        }
    }
}
