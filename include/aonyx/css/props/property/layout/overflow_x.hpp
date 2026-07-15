#pragma once

#include <string>
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
                struct overflow_x : types::property_base<"overflow-x">, constants::global_values<overflow_x>
                {
                    using super_property = types::property_base<"overflow-x">;

                    overflow_x() = delete;
                    overflow_x(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view visible = "visible";
                    inline static constexpr std::string_view hidden = "hidden";
                    inline static constexpr std::string_view clip = "clip";
                    inline static constexpr std::string_view scroll = "scroll";
                    inline static constexpr std::string_view auto_ = "auto";
                };
            }
        }
    }
}
