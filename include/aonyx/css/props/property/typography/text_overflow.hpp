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

                    inline static constexpr types::property_constant clip{key, "clip"};
                    inline static constexpr types::property_constant ellipsis{key, "ellipsis"};
                };
            }
        }
    }
}
