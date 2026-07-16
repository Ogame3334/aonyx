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
                struct counter_increment : types::property_base<"counter-increment">, constants::global_values<counter_increment>
                {
                    using super_property = types::property_base<"counter-increment">;

                    counter_increment() = delete;
                    counter_increment(std::string_view v) : super_property(std::string(v)) {}
                    counter_increment(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    counter_increment(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                };
            }
        }
    }
}
