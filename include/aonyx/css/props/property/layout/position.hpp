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
                struct position : types::property_base<"position">, constants::global_values<position>
                {
                    using super_property = types::property_base<"position">;

                    position() = delete;
                    position(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view static_ = "static";
                    inline static constexpr std::string_view relative = "relative";
                    inline static constexpr std::string_view absolute = "absolute";
                    inline static constexpr std::string_view fixed = "fixed";
                    inline static constexpr std::string_view sticky = "sticky";
                };
            }
        }
    }
}
