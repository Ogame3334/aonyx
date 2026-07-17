/** @brief CSS property: border-width
 *
 * border-width CSS property.
 */
#pragma once

#include <string>
#include <format>
#include <string_view>

#include <aonyx/css/props/types/property.hpp>
#include <aonyx/css/props/constants/global_values.hpp>
#include <aonyx/util/numerical.hpp>

namespace aonyx
{
    namespace css
    {
        namespace props
        {
            namespace property
            {
                struct border_width : types::property_base<"border-width">, constants::global_values<border_width>
                {
                    using super_property = types::property_base<"border-width">;

                    border_width() = delete;
                    border_width(util::numerical w) : super_property(w.to_string()) {}
                    border_width(util::numerical vertical, util::numerical horizontal) : super_property(std::format("{} {}", vertical, horizontal)) {}
                    border_width(util::numerical top, util::numerical horizontal, util::numerical bottom) : super_property(std::format("{} {} {}", top, horizontal, bottom)) {}
                    border_width(util::numerical top, util::numerical right, util::numerical bottom, util::numerical left) : super_property(std::format("{} {} {} {}", top, right, bottom, left)) {}
                };
            }
        }
    }
}
