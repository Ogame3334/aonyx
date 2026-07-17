/** @brief CSS property: caption-side
 *
 * caption-side CSS property.
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
                struct caption_side : types::property_base<"caption-side">, constants::global_values<caption_side>
                {
                    using super_property = types::property_base<"caption-side">;

                    caption_side() = delete;
                    caption_side(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant top{key, "top"};
                    inline static constexpr types::property_constant bottom{key, "bottom"};
                    inline static constexpr types::property_constant block_start{key, "block-start"};
                    inline static constexpr types::property_constant block_end{key, "block-end"};
                    inline static constexpr types::property_constant inline_start{key, "inline-start"};
                    inline static constexpr types::property_constant inline_end{key, "inline-end"};
                };
            }
        }
    }
}
