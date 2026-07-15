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
                struct caret_animation : types::property_base<"caret-animation">, constants::global_values<caret_animation>
                {
                    using super_property = types::property_base<"caret-animation">;

                    caret_animation() = delete;
                    caret_animation(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view blink = "blink";
                    inline static constexpr std::string_view steady = "steady";
                };
            }
        }
    }
}
