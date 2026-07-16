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
                struct perspective_origin : types::property_base<"perspective-origin">, constants::global_values<perspective_origin>
                {
                    using super_property = types::property_base<"perspective-origin">;

                    perspective_origin() = delete;
                    perspective_origin(std::string_view v) : super_property(std::string(v)) {}
                    perspective_origin(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}

                    inline static constexpr types::property_constant left{key, "left"};
                    inline static constexpr types::property_constant center{key, "center"};
                    inline static constexpr types::property_constant right{key, "right"};
                    inline static constexpr types::property_constant top{key, "top"};
                    inline static constexpr types::property_constant bottom{key, "bottom"};
                };
            }
        }
    }
}
