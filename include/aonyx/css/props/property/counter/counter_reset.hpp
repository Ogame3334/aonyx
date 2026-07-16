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
                struct counter_reset : types::property_base<"counter-reset">, constants::global_values<counter_reset>
                {
                    using super_property = types::property_base<"counter-reset">;

                    counter_reset() = delete;
                    counter_reset(std::string_view v) : super_property(std::string(v)) {}
                    counter_reset(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    counter_reset(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                };
            }
        }
    }
}
