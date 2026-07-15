#pragma once

#include <string>
#include <string_view>

#include <aonyx/css/props/types/property.hpp>
#include <aonyx/css/props/constants/global_values.hpp>
#include <aonyx/util/numerical.hpp>

namespace aonyx
{
    namespace css
    {
        namespace props
        {
            namespace property
            {
                struct font_size : types::property_base<"font-size">, constants::global_values<font_size>
                {
                    using super_property = types::property_base<"font-size">;

                    font_size() = delete;
                    font_size(util::numerical v) : super_property(v.to_string()) {}
                    font_size(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view xx_small = "xx-small";
                    inline static constexpr std::string_view x_small = "x-small";
                    inline static constexpr std::string_view small = "small";
                    inline static constexpr std::string_view medium = "medium";
                    inline static constexpr std::string_view large = "large";
                    inline static constexpr std::string_view x_large = "x-large";
                    inline static constexpr std::string_view xx_large = "xx-large";
                    inline static constexpr std::string_view smaller = "smaller";
                    inline static constexpr std::string_view larger = "larger";
                };
            }
        }
    }
}
