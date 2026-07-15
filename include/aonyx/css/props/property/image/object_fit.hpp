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
                struct object_fit : types::property_base<"object-fit">, constants::global_values<object_fit>
                {
                    using super_property = types::property_base<"object-fit">;

                    object_fit() = delete;
                    object_fit(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view fill = "fill";
                    inline static constexpr std::string_view contain = "contain";
                    inline static constexpr std::string_view cover = "cover";
                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view scale_down = "scale-down";
                };
            }
        }
    }
}
