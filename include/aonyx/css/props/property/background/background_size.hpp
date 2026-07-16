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
                struct background_size : types::property_base<"background-size">, constants::global_values<background_size>
                {
                    using super_property = types::property_base<"background-size">;

                    background_size() = delete;
                    background_size(std::string_view v) : super_property(std::string(v)) {}
                    background_size(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    background_size(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4) : super_property(std::format("{} {}, {} {}", v1, v2, v3, v4)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant cover{key, "cover"};
                    inline static constexpr types::property_constant contain{key, "contain"};
                };
            }
        }
    }
}
