/** @brief CSS property: isolation
 *
 * isolation CSS property.
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
struct isolation : types::property_base<"isolation">, constants::global_values<isolation>
{
    using super_property = types::property_base<"isolation">;

    isolation() = delete;
    isolation(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
    inline static constexpr types::property_constant isolate{key, "isolate"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
