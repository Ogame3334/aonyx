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
                struct anchor_scope : types::property_base<"anchor-scope">, constants::global_values<anchor_scope>
                {
                    using super_property = types::property_base<"anchor-scope">;

                    anchor_scope() = delete;
                    anchor_scope(std::string_view v) : super_property(std::string(v)) {}
                    anchor_scope(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2)) {}

                    inline static constexpr std::string_view none = "none";
                };
            }
        }
    }
}
