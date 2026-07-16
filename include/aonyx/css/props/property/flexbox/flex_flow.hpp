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
                struct flex_flow : types::property_base<"flex-flow">, constants::global_values<flex_flow>
                {
                    using super_property = types::property_base<"flex-flow">;

                    flex_flow() = delete;
                    flex_flow(std::string_view direction) : super_property(std::string(direction)) {}
                    flex_flow(std::string_view direction, std::string_view wrap) : super_property(std::format("{} {}", direction, wrap)) {}
                };
            }
        }
    }
}
