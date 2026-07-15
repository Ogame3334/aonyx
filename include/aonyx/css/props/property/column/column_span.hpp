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
                struct column_span : types::property_base<"column-span">, constants::global_values<column_span>
                {
                    using super_property = types::property_base<"column-span">;

                    column_span() = delete;
                    column_span(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view all = "all";
                };
            }
        }
    }
}
