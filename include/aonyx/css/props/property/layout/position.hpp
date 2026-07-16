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

                    inline static constexpr types::property_constant static_{key, "static"};
                    inline static constexpr types::property_constant relative{key, "relative"};
                    inline static constexpr types::property_constant absolute{key, "absolute"};
                    inline static constexpr types::property_constant fixed{key, "fixed"};
                    inline static constexpr types::property_constant sticky{key, "sticky"};
                };
            }
        }
    }
}
