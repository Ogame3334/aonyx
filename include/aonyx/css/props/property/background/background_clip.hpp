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
                struct background_clip : types::property_base<"background-clip">, constants::global_values<background_clip>
                {
                    using super_property = types::property_base<"background-clip">;

                    background_clip() = delete;
                    background_clip(std::string_view v) : super_property(std::string(v)) {}
                    background_clip(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2)) {}
                    background_clip(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{}, {}, {}", v1, v2, v3)) {}

                    inline static constexpr types::property_constant border_box{key, "border-box"};
                    inline static constexpr types::property_constant padding_box{key, "padding-box"};
                    inline static constexpr types::property_constant content_box{key, "content-box"};
                    inline static constexpr types::property_constant text{key, "text"};
                };
            }
        }
    }
}
