/** @brief CSS property: initial-letter
 *
 * initial-letter CSS property.
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
                struct initial_letter : types::property_base<"initial-letter">, constants::global_values<initial_letter>
                {
                    using super_property = types::property_base<"initial-letter">;

                    initial_letter() = delete;
                    initial_letter(util::numerical v) : super_property(v.to_string()) {}
                    initial_letter(util::numerical normal, util::numerical drop) : super_property(std::format("{} {}", normal, drop)) {}
                    initial_letter(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant normal{key, "normal"};
                };
            }
        }
    }
}
