/** @brief CSS property: aspect-ratio
 *
 * aspect-ratio CSS property.
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
struct aspect_ratio : types::property_base<"aspect-ratio">, constants::global_values<aspect_ratio>
{
    using super_property = types::property_base<"aspect-ratio">;

    aspect_ratio() = delete;
    aspect_ratio(util::numerical width, util::numerical height) : super_property(std::format("{} / {}", width, height))
    {
    }
    aspect_ratio(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
