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
                struct text_anchor : types::property_base<"text-anchor">, constants::global_values<text_anchor>
                {
                    using super_property = types::property_base<"text-anchor">;

                    text_anchor() = delete;
                    text_anchor(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view start = "start";
                    inline static constexpr std::string_view middle = "middle";
                    inline static constexpr std::string_view end = "end";
                };
            }
        }
    }
}
