/** @brief CSS property: overflow-x
 *
 * overflow-x CSS property.
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
struct overflow_x : types::property_base<"overflow-x">, constants::global_values<overflow_x>
{
    using super_property = types::property_base<"overflow-x">;

    overflow_x() = delete;
    overflow_x(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant visible{key, "visible"};
    inline static constexpr types::property_constant hidden{key, "hidden"};
    inline static constexpr types::property_constant clip{key, "clip"};
    inline static constexpr types::property_constant scroll{key, "scroll"};
    inline static constexpr types::property_constant auto_{key, "auto"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
