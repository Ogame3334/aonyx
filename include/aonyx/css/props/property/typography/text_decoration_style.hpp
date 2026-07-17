/** @brief CSS property: text-decoration-style
 *
 * text-decoration-style CSS property.
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
struct text_decoration_style : types::property_base<"text-decoration-style">,
                               constants::global_values<text_decoration_style>
{
    using super_property = types::property_base<"text-decoration-style">;

    text_decoration_style() = delete;
    text_decoration_style(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant solid{key, "solid"};
    inline static constexpr types::property_constant double_{key, "double"};
    inline static constexpr types::property_constant dotted{key, "dotted"};
    inline static constexpr types::property_constant dashed{key, "dashed"};
    inline static constexpr types::property_constant wavy{key, "wavy"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
