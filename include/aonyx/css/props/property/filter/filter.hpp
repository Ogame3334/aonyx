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
                struct filter : types::property_base<"filter">, constants::global_values<filter>
                {
                    using super_property = types::property_base<"filter">;

                    filter() = delete;
                    filter(std::string_view v) : super_property(std::string(v)) {}
                    filter(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    filter(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}
                    filter(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4) : super_property(std::format("{} {} {} {}", v1, v2, v3, v4)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                };
            }
        }
    }
}
