/** @brief CSS property: text-box-trim
 *
 * text-box-trim CSS property.
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
                struct text_box_trim : types::property_base<"text-box-trim">, constants::global_values<text_box_trim>
                {
                    using super_property = types::property_base<"text-box-trim">;

                    text_box_trim() = delete;
                    text_box_trim(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                    inline static constexpr types::property_constant start{key, "start"};
                    inline static constexpr types::property_constant end{key, "end"};
                    inline static constexpr types::property_constant both{key, "both"};
                };
            }
        }
    }
}
