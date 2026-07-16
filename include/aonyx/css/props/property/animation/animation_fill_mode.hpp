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
                struct animation_fill_mode : types::property_base<"animation-fill-mode">, constants::global_values<animation_fill_mode>
                {
                    using super_property = types::property_base<"animation-fill-mode">;

                    animation_fill_mode() = delete;
                    animation_fill_mode(std::string_view v) : super_property(std::string(v)) {}
                    animation_fill_mode(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                    inline static constexpr types::property_constant forwards{key, "forwards"};
                    inline static constexpr types::property_constant backwards{key, "backwards"};
                    inline static constexpr types::property_constant both{key, "both"};
                };
            }
        }
    }
}
