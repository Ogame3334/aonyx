/** @brief CSS property: vertical-align
 *
 * vertical-align CSS property.
 */
#pragma once

#include <string>
#include <string_view>

#include <aonyx/css/props/types/property.hpp>
#include <aonyx/css/props/constants/global_values.hpp>
#include <aonyx/util/numerical.hpp>

namespace aonyx
{
    namespace css
    {
        namespace props
        {
            namespace property
            {
                struct vertical_align : types::property_base<"vertical-align">, constants::global_values<vertical_align>
                {
                    using super_property = types::property_base<"vertical-align">;

                    vertical_align() = delete;
                    vertical_align(util::numerical v) : super_property(v.to_string()) {}
                    vertical_align(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant baseline{key, "baseline"};
                    inline static constexpr types::property_constant sub{key, "sub"};
                    inline static constexpr types::property_constant super{key, "super"};
                    inline static constexpr types::property_constant top{key, "top"};
                    inline static constexpr types::property_constant text_top{key, "text-top"};
                    inline static constexpr types::property_constant middle{key, "middle"};
                    inline static constexpr types::property_constant bottom{key, "bottom"};
                    inline static constexpr types::property_constant text_bottom{key, "text-bottom"};
                };
            }
        }
    }
}
