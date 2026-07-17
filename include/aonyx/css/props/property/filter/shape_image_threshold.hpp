/** @brief CSS property: shape-image-threshold
 *
 * shape-image-threshold CSS property.
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
                struct shape_image_threshold : types::property_base<"shape-image-threshold">, constants::global_values<shape_image_threshold>
                {
                    using super_property = types::property_base<"shape-image-threshold">;

                    shape_image_threshold() = delete;
                    shape_image_threshold(std::string_view v) : super_property(std::string(v)) {}
                };
            }
        }
    }
}
