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

                    inline static constexpr types::property_constant normal{key, "normal"};
                    inline static constexpr types::property_constant inline_size{key, "inline-size"};
                    inline static constexpr types::property_constant size{key, "size"};
                };
            }
        }
    }
}
