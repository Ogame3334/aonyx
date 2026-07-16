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
                struct offset_rotate : types::property_base<"offset-rotate">, constants::global_values<offset_rotate>
                {
                    using super_property = types::property_base<"offset-rotate">;

                    offset_rotate() = delete;
                    offset_rotate(std::string_view v) : super_property(std::string(v)) {}
                    offset_rotate(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant reverse{key, "reverse"};
                };
            }
        }
    }
}
