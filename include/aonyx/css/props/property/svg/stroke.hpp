/** @brief CSS property: stroke
 *
 * stroke CSS property.
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
                struct stroke : types::property_base<"stroke">, constants::global_values<stroke>
                {
                    using super_property = types::property_base<"stroke">;

                    stroke() = delete;
                    stroke(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                    inline static constexpr types::property_constant context_fill{key, "context-fill"};
                    inline static constexpr types::property_constant context_stroke{key, "context-stroke"};
                };
            }
        }
    }
}
