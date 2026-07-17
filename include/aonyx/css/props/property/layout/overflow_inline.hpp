/** @brief CSS property: overflow-inline
 *
 * overflow-inline CSS property.
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
                struct overflow_inline : types::property_base<"overflow-inline">, constants::global_values<overflow_inline>
                {
                    using super_property = types::property_base<"overflow-inline">;

                    overflow_inline() = delete;
                    overflow_inline(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant visible{key, "visible"};
                    inline static constexpr types::property_constant hidden{key, "hidden"};
                    inline static constexpr types::property_constant clip{key, "clip"};
                    inline static constexpr types::property_constant scroll{key, "scroll"};
                    inline static constexpr types::property_constant auto_{key, "auto"};
                };
            }
        }
    }
}
