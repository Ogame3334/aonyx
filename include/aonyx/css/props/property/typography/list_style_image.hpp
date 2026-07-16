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
                struct list_style_image : types::property_base<"list-style-image">, constants::global_values<list_style_image>
                {
                    using super_property = types::property_base<"list-style-image">;

                    list_style_image() = delete;
                    list_style_image(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                };
            }
        }
    }
}
