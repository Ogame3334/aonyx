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
                struct mask_composite : types::property_base<"mask-composite">, constants::global_values<mask_composite>
                {
                    using super_property = types::property_base<"mask-composite">;

                    mask_composite() = delete;
                    mask_composite(std::string_view v) : super_property(std::string(v)) {}
                    mask_composite(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2)) {}

                    inline static constexpr types::property_constant add{key, "add"};
                    inline static constexpr types::property_constant subtract{key, "subtract"};
                    inline static constexpr types::property_constant intersect{key, "intersect"};
                    inline static constexpr types::property_constant exclude{key, "exclude"};
                };
            }
        }
    }
}
