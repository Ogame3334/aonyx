/** @brief CSS property: grid-template
 *
 * grid-template CSS property.
 */
#pragma once

#include <format>
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
struct grid_template : types::property_base<"grid-template">, constants::global_values<grid_template>
{
    using super_property = types::property_base<"grid-template">;

    grid_template() = delete;
    grid_template(std::string_view rows, std::string_view columns)
        : super_property(std::format("{} / {}", rows, columns))
    {
    }
    grid_template(std::string_view rows, std::string_view columns, std::string_view areas)
        : super_property(std::format("{} / {} / {}", rows, columns, areas))
    {
    }
    grid_template(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
