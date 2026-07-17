/** @brief CSS property: content-visibility
 *
 * content-visibility CSS property.
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
                struct content_visibility : types::property_base<"content-visibility">, constants::global_values<content_visibility>
                {
                    using super_property = types::property_base<"content-visibility">;

                    content_visibility() = delete;
                    content_visibility(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant visible{key, "visible"};
                    inline static constexpr types::property_constant hidden{key, "hidden"};
                    inline static constexpr types::property_constant auto_{key, "auto"};
                };
            }
        }
    }
}
