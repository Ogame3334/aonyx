/** @brief CSS property: width
 *
 * width CSS property.
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
                struct width : types::property_base<"width">, constants::global_values<width>
                {
                    using super_property = types::property_base<"width">;

                    width() = delete;
                    width(util::numerical w) : super_property(w.to_string()) {}
                    width(std::string_view w) : super_property(std::string(w)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant fit_content{key, "fit-content"};
                    inline static constexpr types::property_constant min_content{key, "min-content"};
                    inline static constexpr types::property_constant max_content{key, "max-content"};
                    inline static constexpr types::property_constant available{key, "available"};
                    inline static constexpr types::property_constant stretch{key, "stretch"};
                };
            }
        }
    }
}
