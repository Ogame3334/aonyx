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
                struct text_wrap_style : types::property_base<"text-wrap-style">, constants::global_values<text_wrap_style>
                {
                    using super_property = types::property_base<"text-wrap-style">;

                    text_wrap_style() = delete;
                    text_wrap_style(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view balance = "balance";
                    inline static constexpr std::string_view pretty = "pretty";
                    inline static constexpr std::string_view stable = "stable";
                };
            }
        }
    }
}
