/** @brief CSS property: contain-intrinsic-size
 *
 * contain-intrinsic-size CSS property.
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
                struct contain_intrinsic_size : types::property_base<"contain-intrinsic-size">, constants::global_values<contain_intrinsic_size>
                {
                    using super_property = types::property_base<"contain-intrinsic-size">;

                    contain_intrinsic_size() = delete;
                    contain_intrinsic_size(util::numerical v) : super_property(v.to_string()) {}
                    contain_intrinsic_size(util::numerical w, util::numerical h) : super_property(std::format("{} {}", w, h)) {}
                    contain_intrinsic_size(std::string_view v) : super_property(std::string(v)) {}
                    contain_intrinsic_size(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    contain_intrinsic_size(util::numerical w, std::string_view h) : super_property(std::format("{} {}", w, h)) {}
                    contain_intrinsic_size(std::string_view w, util::numerical h) : super_property(std::format("{} {}", w, h)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant none{key, "none"};
                };
            }
        }
    }
}
