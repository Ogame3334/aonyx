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

                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view manual = "manual";
                    inline static constexpr std::string_view auto_ = "auto";
                };
            }
        }
    }
}
