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
                struct fill_rule : types::property_base<"fill-rule">, constants::global_values<fill_rule>
                {
                    using super_property = types::property_base<"fill-rule">;

                    fill_rule() = delete;
                    fill_rule(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view nonzero = "nonzero";
                    inline static constexpr std::string_view evenodd = "evenodd";
                };
            }
        }
    }
}
