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
                struct font_language_override : types::property_base<"font-language-override">, constants::global_values<font_language_override>
                {
                    using super_property = types::property_base<"font-language-override">;

                    font_language_override() = delete;
                    font_language_override(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant normal{key, "normal"};
                };
            }
        }
    }
}
