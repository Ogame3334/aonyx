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
                struct offset_path : types::property_base<"offset-path">, constants::global_values<offset_path>
                {
                    using super_property = types::property_base<"offset-path">;

                    offset_path() = delete;
                    offset_path(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view ray = "ray";
                };
            }
        }
    }
}
