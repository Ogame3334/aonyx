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
                struct border_spacing : types::property_base<"border-spacing">, constants::global_values<border_spacing>
                {
                    using super_property = types::property_base<"border-spacing">;

                    border_spacing() = delete;
                    border_spacing(util::numerical l) : super_property(l.to_string()) {}
                    border_spacing(util::numerical h, util::numerical v) : super_property(std::format("{} {}", h, v)) {}
                };
            }
        }
    }
}
