/** @brief CSS property: offset-path
 *
 * offset-path CSS property.
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
                struct offset_path : types::property_base<"offset-path">, constants::global_values<offset_path>
                {
                    using super_property = types::property_base<"offset-path">;

                    offset_path() = delete;
                    offset_path(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant ray{key, "ray"};
                };
            }
        }
    }
}
