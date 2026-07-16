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
                struct grid_column_end : types::property_base<"grid-column-end">, constants::global_values<grid_column_end>
                {
                    using super_property = types::property_base<"grid-column-end">;

                    grid_column_end() = delete;
                    grid_column_end(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant span{key, "span"};
                };
            }
        }
    }
}
