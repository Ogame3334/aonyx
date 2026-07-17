/** @brief CSS property: contain-intrinsic-width
 *
 * contain-intrinsic-width CSS property.
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
struct contain_intrinsic_width : types::property_base<"contain-intrinsic-width">,
                                 constants::global_values<contain_intrinsic_width>
{
    using super_property = types::property_base<"contain-intrinsic-width">;

    contain_intrinsic_width() = delete;
    contain_intrinsic_width(util::numerical v) : super_property(v.to_string())
    {
    }
    contain_intrinsic_width(std::string_view v) : super_property(std::string(v))
    {
    }
    contain_intrinsic_width(util::numerical v1, util::numerical v2) : super_property(std::format("{} {}", v1, v2))
    {
    }
    contain_intrinsic_width(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }
    contain_intrinsic_width(util::numerical v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }
    contain_intrinsic_width(std::string_view v1, util::numerical v2) : super_property(std::format("{} {}", v1, v2))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
