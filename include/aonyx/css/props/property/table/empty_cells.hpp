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
                struct empty_cells : types::property_base<"empty-cells">, constants::global_values<empty_cells>
                {
                    using super_property = types::property_base<"empty-cells">;

                    empty_cells() = delete;
                    empty_cells(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant show{key, "show"};
                    inline static constexpr types::property_constant hide{key, "hide"};
                };
            }
        }
    }
}
