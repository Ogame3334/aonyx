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
                struct reading_order : types::property_base<"reading-order">, constants::global_values<reading_order>
                {
                    using super_property = types::property_base<"reading-order">;

                    reading_order() = delete;
                    reading_order(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view normal = "normal";
                    inline static constexpr std::string_view reverse = "reverse";
                };
            }
        }
    }
}
