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
                struct flex_direction : types::property_base<"flex-direction">, constants::global_values<flex_direction>
                {
                    using super_property = types::property_base<"flex-direction">;

                    flex_direction() = delete;
                    flex_direction(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view row = "row";
                    inline static constexpr std::string_view row_reverse = "row-reverse";
                    inline static constexpr std::string_view column = "column";
                    inline static constexpr std::string_view column_reverse = "column-reverse";
                };
            }
        }
    }
}
