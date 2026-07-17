/** @brief CSS property: top
 *
 * top CSS property.
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
                struct top : types::property_base<"top">, constants::global_values<top>
                {
                    using super_property = types::property_base<"top">;

                    top() = delete;
                    top(util::numerical v) : super_property(v.to_string()) {}
                    top(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                };
            }
        }
    }
}
