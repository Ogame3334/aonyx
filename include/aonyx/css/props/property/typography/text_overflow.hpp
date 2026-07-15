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
                struct text_overflow : types::property_base<"text-overflow">, constants::global_values<text_overflow>
                {
                    using super_property = types::property_base<"text-overflow">;

                    text_overflow() = delete;
                    text_overflow(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view clip = "clip";
                    inline static constexpr std::string_view ellipsis = "ellipsis";
                };
            }
        }
    }
}
