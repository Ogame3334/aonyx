#pragma once

#include <string>
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
                struct text_decoration_thickness : types::property_base<"text-decoration-thickness">, constants::global_values<text_decoration_thickness>
                {
                    using super_property = types::property_base<"text-decoration-thickness">;

                    text_decoration_thickness() = delete;
                    text_decoration_thickness(util::numerical v) : super_property(v.to_string()) {}
                    text_decoration_thickness(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant from_font{key, "from-font"};
                };
            }
        }
    }
}
