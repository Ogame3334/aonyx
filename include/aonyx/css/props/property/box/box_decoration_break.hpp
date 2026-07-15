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
                struct box_decoration_break : types::property_base<"box-decoration-break">, constants::global_values<box_decoration_break>
                {
                    using super_property = types::property_base<"box-decoration-break">;

                    box_decoration_break() = delete;
                    box_decoration_break(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view slice = "slice";
                    inline static constexpr std::string_view clone = "clone";
                };
            }
        }
    }
}
