/** @brief CSS property: border-image-slice
 *
 * border-image-slice CSS property.
 */
#pragma once

#include <string>
#include <format>
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
                struct border_image_slice : types::property_base<"border-image-slice">, constants::global_values<border_image_slice>
                {
                    using super_property = types::property_base<"border-image-slice">;

                    border_image_slice() = delete;
                    border_image_slice(std::string_view slice) : super_property(std::string(slice)) {}
                    border_image_slice(std::string_view slice, std::string_view fill) : super_property(std::format("{} {}", slice, fill)) {}

                    inline static constexpr types::property_constant fill{key, "fill"};
                };
            }
        }
    }
}
