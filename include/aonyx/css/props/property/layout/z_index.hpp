/** @brief CSS property: z-index
 *
 * z-index CSS property.
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
                struct z_index : types::property_base<"z-index">, constants::global_values<z_index>
                {
                    using super_property = types::property_base<"z-index">;

                    z_index() = delete;
                    z_index(util::numerical v) : super_property(v.to_string()) {}
                    z_index(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                };
            }
        }
    }
}
