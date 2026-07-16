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
                struct hyphens : types::property_base<"hyphens">, constants::global_values<hyphens>
                {
                    using super_property = types::property_base<"hyphens">;

                    hyphens() = delete;
                    hyphens(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                    inline static constexpr types::property_constant manual{key, "manual"};
                    inline static constexpr types::property_constant auto_{key, "auto"};
                };
            }
        }
    }
}
