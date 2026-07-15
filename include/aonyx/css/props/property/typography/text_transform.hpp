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
                struct text_transform : types::property_base<"text-transform">, constants::global_values<text_transform>
                {
                    using super_property = types::property_base<"text-transform">;

                    text_transform() = delete;
                    text_transform(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view capitalize = "capitalize";
                    inline static constexpr std::string_view uppercase = "uppercase";
                    inline static constexpr std::string_view lowercase = "lowercase";
                    inline static constexpr std::string_view full_width = "full-width";
                    inline static constexpr std::string_view full_size_kana = "full-size-kana";
                };
            }
        }
    }
}
