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
                struct stroke : types::property_base<"stroke">, constants::global_values<stroke>
                {
                    using super_property = types::property_base<"stroke">;

                    stroke() = delete;
                    stroke(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view context_fill = "context-fill";
                    inline static constexpr std::string_view context_stroke = "context-stroke";
                };
            }
        }
    }
}
