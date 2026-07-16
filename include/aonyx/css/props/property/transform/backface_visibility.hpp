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
                struct backface_visibility : types::property_base<"backface-visibility">, constants::global_values<backface_visibility>
                {
                    using super_property = types::property_base<"backface-visibility">;

                    backface_visibility() = delete;
                    backface_visibility(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant visible{key, "visible"};
                    inline static constexpr types::property_constant hidden{key, "hidden"};
                };
            }
        }
    }
}
