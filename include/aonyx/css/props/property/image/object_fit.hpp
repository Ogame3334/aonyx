/** @brief CSS property: object-fit
 *
 * object-fit CSS property.
 */
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

                    inline static constexpr types::property_constant fill{key, "fill"};
                    inline static constexpr types::property_constant contain{key, "contain"};
                    inline static constexpr types::property_constant cover{key, "cover"};
                    inline static constexpr types::property_constant none{key, "none"};
                    inline static constexpr types::property_constant scale_down{key, "scale-down"};
                };
            }
        }
    }
}
