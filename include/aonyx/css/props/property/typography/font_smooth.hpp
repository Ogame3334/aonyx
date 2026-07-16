#pragma once

#include <string>
#include <format>
#include <string_view>

#include <aonyx/css/props/types/property.hpp>
#include <aonyx/css/props/constants/global_values.hpp>
#include <aonyx/util/numerical.hpp>

namespace aonyx
{
    namespace css
    {
        namespace props
        {
            namespace property
            {
                struct font_smooth : types::property_base<"font-smooth">, constants::global_values<font_smooth>
                {
                    using super_property = types::property_base<"font-smooth">;

                    font_smooth() = delete;
                    font_smooth(std::string_view v) : super_property(std::string(v)) {}
                    font_smooth(std::string_view v, util::numerical size) : super_property(std::format("{} {}", v, size)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant never{key, "never"};
                    inline static constexpr types::property_constant always{key, "always"};
                    inline static constexpr types::property_constant grayscale{key, "grayscale"};
                };
            }
        }
    }
}
