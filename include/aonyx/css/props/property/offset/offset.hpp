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
                struct offset : types::property_base<"offset">, constants::global_values<offset>
                {
                    using super_property = types::property_base<"offset">;

                    offset() = delete;
                    offset(std::string_view v) : super_property(std::string(v)) {}
                    offset(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    offset(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}
                    offset(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4) : super_property(std::format("{} {} {} {}", v1, v2, v3, v4)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view none = "none";
                };
            }
        }
    }
}
