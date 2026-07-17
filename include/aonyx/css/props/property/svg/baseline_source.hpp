/** @brief CSS property: baseline-source
 *
 * baseline-source CSS property.
 */
#pragma once

#include <string>
#include <string_view>

#include <aonyx/css/props/constants/global_values.hpp>
#include <aonyx/css/props/types/property.hpp>

namespace aonyx
{
namespace css
{
namespace props
{
namespace property
{
struct baseline_source : types::property_base<"baseline-source">, constants::global_values<baseline_source>
{
    using super_property = types::property_base<"baseline-source">;

    baseline_source() = delete;
    baseline_source(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
    inline static constexpr types::property_constant first{key, "first"};
    inline static constexpr types::property_constant last{key, "last"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
