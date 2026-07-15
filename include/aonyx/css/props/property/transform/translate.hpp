#pragma once

#include <string>
#include <format>
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
                struct translate : types::property_base<"translate">, constants::global_values<translate>
                {
                    using super_property = types::property_base<"translate">;

                    translate() = delete;
                    translate(std::string_view v) : super_property(std::string(v)) {}
                    translate(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    translate(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}

                    inline static constexpr std::string_view none = "none";
                };
            }
        }
    }
}
