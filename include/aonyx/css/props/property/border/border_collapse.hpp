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
                struct border_collapse : types::property_base<"border-collapse">, constants::global_values<border_collapse>
                {
                    using super_property = types::property_base<"border-collapse">;

                    border_collapse() = delete;
                    border_collapse(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view separate = "separate";
                    inline static constexpr std::string_view collapse = "collapse";
                };
            }
        }
    }
}
