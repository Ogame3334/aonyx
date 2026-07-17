/** @brief CSS property: contain-intrinsic-height
 *
 * contain-intrinsic-height CSS property.
 */
#pragma once

#include <format>
#include <string>
#include <string_view>

#include <aonyx/css/props/constants/global_values.hpp>
#include <aonyx/css/props/types/property.hpp>
#include <aonyx/util/numerical.hpp>

namespace aonyx
{
namespace css
{
namespace props
{
namespace property
{
struct contain_intrinsic_height : types::property_base<"contain-intrinsic-height">,
                                  constants::global_values<contain_intrinsic_height>
{
    using super_property = types::property_base<"contain-intrinsic-height">;

    contain_intrinsic_height() = delete;
    contain_intrinsic_height(util::numerical v) : super_property(v.to_string())
    {
    }
    contain_intrinsic_height(const std::string_view s) : super_property(std::string(s))
    {
    }
    contain_intrinsic_height(util::numerical v1, util::numerical v2) : super_property(std::format("{} {}", v1, v2))
    {
    }
    contain_intrinsic_height(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }
    contain_intrinsic_height(util::numerical v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }
    contain_intrinsic_height(std::string_view v1, util::numerical v2) : super_property(std::format("{} {}", v1, v2))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
