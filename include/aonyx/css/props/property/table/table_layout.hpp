/** @brief CSS property: table-layout
 *
 * table-layout CSS property.
 */
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
                struct table_layout : types::property_base<"table-layout">, constants::global_values<table_layout>
                {
                    using super_property = types::property_base<"table-layout">;

                    table_layout() = delete;
                    table_layout(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant fixed{key, "fixed"};
                };
            }
        }
    }
}
