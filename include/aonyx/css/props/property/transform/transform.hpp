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
                struct transform : types::property_base<"transform">, constants::global_values<transform>
                {
                    using super_property = types::property_base<"transform">;

                    transform() = delete;
                    transform(std::string_view v) : super_property(std::string(v)) {}
                    transform(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    transform(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}
                    transform(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4) : super_property(std::format("{} {} {} {}", v1, v2, v3, v4)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                };
            }
        }
    }
}
