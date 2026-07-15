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
                struct caret_shape : types::property_base<"caret-shape">, constants::global_values<caret_shape>
                {
                    using super_property = types::property_base<"caret-shape">;

                    caret_shape() = delete;
                    caret_shape(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view bar = "bar";
                    inline static constexpr std::string_view block = "block";
                    inline static constexpr std::string_view underscore = "underscore";
                };
            }
        }
    }
}
