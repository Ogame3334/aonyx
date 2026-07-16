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
                struct anchor_name : types::property_base<"anchor-name">, constants::global_values<anchor_name>
                {
                    using super_property = types::property_base<"anchor-name">;

                    anchor_name() = delete;
                    anchor_name(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                };
            }
        }
    }
}
