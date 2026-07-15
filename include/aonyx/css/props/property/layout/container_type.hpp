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
                struct container_type : types::property_base<"container-type">, constants::global_values<container_type>
                {
                    using super_property = types::property_base<"container-type">;

                    container_type() = delete;
                    container_type(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view normal = "normal";
                    inline static constexpr std::string_view inline_size = "inline-size";
                    inline static constexpr std::string_view size = "size";
                };
            }
        }
    }
}
