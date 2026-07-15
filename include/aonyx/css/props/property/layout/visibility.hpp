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
                struct visibility : types::property_base<"visibility">, constants::global_values<visibility>
                {
                    using super_property = types::property_base<"visibility">;

                    visibility() = delete;
                    visibility(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view visible = "visible";
                    inline static constexpr std::string_view hidden = "hidden";
                    inline static constexpr std::string_view collapse = "collapse";
                };
            }
        }
    }
}
