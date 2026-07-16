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
                struct marker_end : types::property_base<"marker-end">, constants::global_values<marker_end>
                {
                    using super_property = types::property_base<"marker-end">;

                    marker_end() = delete;
                    marker_end(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                };
            }
        }
    }
}
