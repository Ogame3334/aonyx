/** @brief CSS property: flex
 *
 * flex CSS property.
 */
#pragma once

#include <string>
#include <format>
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
                struct flex : types::property_base<"flex">, constants::global_values<flex>
                {
                    using super_property = types::property_base<"flex">;

                    flex() = delete;
                    flex(util::numerical grow) : super_property(grow.to_string()) {}
                    flex(util::numerical grow, util::numerical shrink) : super_property(std::format("{} {}", grow, shrink)) {}
                    flex(util::numerical grow, util::numerical shrink, util::numerical basis) : super_property(std::format("{} {} {}", grow, shrink, basis)) {}
                    flex(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                    inline static constexpr types::property_constant auto_{key, "auto"};
                };
            }
        }
    }
}
