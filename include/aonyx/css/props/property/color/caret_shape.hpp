/** @brief CSS property: caret-shape
 *
 * caret-shape CSS property.
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
                struct caret_shape : types::property_base<"caret-shape">, constants::global_values<caret_shape>
                {
                    using super_property = types::property_base<"caret-shape">;

                    caret_shape() = delete;
                    caret_shape(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant bar{key, "bar"};
                    inline static constexpr types::property_constant block{key, "block"};
                    inline static constexpr types::property_constant underscore{key, "underscore"};
                };
            }
        }
    }
}
