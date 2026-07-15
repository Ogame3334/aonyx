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
                struct scrollbar_width : types::property_base<"scrollbar-width">, constants::global_values<scrollbar_width>
                {
                    using super_property = types::property_base<"scrollbar-width">;

                    scrollbar_width() = delete;
                    scrollbar_width(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view thin = "thin";
                    inline static constexpr std::string_view none = "none";
                };
            }
        }
    }
}
