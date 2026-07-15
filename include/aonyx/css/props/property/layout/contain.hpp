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
                struct contain : types::property_base<"contain">, constants::global_values<contain>
                {
                    using super_property = types::property_base<"contain">;

                    contain() = delete;
                    contain(std::string_view v) : super_property(std::string(v)) {}
                    contain(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    contain(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}

                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view strict = "strict";
                    inline static constexpr std::string_view content = "content";
                    inline static constexpr std::string_view size = "size";
                    inline static constexpr std::string_view inline_size = "inline-size";
                    inline static constexpr std::string_view layout = "layout";
                    inline static constexpr std::string_view style = "style";
                    inline static constexpr std::string_view paint = "paint";
                };
            }
        }
    }
}
