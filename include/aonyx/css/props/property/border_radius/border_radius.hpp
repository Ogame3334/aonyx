/** @brief CSS property: border-radius
 *
 * border-radius CSS property.
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
                struct border_radius : types::property_base<"border-radius">, constants::global_values<border_radius>
                {
                    using super_property = types::property_base<"border-radius">;

                    border_radius() = delete;
                    border_radius(util::numerical r) : super_property(r.to_string()) {}
                    border_radius(util::numerical tl_br, util::numerical tr_bl) : super_property(std::format("{} {}", tl_br, tr_bl)) {}
                    border_radius(util::numerical tl, util::numerical tr_bl, util::numerical br) : super_property(std::format("{} {} {}", tl, tr_bl, br)) {}
                    border_radius(util::numerical tl, util::numerical tr, util::numerical br, util::numerical bl) : super_property(std::format("{} {} {} {}", tl, tr, br, bl)) {}
                };
            }
        }
    }
}
