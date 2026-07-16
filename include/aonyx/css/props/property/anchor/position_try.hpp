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
                struct position_try : types::property_base<"position-try">, constants::global_values<position_try>
                {
                    using super_property = types::property_base<"position-try">;

                    position_try() = delete;
                    position_try(std::string_view v) : super_property(std::string(v)) {}
                    position_try(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    position_try(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}
                };
            }
        }
    }
}
