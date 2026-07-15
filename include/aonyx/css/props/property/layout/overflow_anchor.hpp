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
                struct overflow_anchor : types::property_base<"overflow-anchor">, constants::global_values<overflow_anchor>
                {
                    using super_property = types::property_base<"overflow-anchor">;

                    overflow_anchor() = delete;
                    overflow_anchor(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view none = "none";
                };
            }
        }
    }
}
