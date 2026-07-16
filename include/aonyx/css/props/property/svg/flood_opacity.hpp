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
                struct flood_opacity : types::property_base<"flood-opacity">, constants::global_values<flood_opacity>
                {
                    using super_property = types::property_base<"flood-opacity">;

                    flood_opacity() = delete;
                    flood_opacity(std::string_view v) : super_property(std::string(v)) {}
                };
            }
        }
    }
}
