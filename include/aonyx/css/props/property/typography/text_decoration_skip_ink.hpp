/** @brief CSS property: text-decoration-skip-ink
 *
 * text-decoration-skip-ink CSS property.
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
struct text_decoration_skip_ink : types::property_base<"text-decoration-skip-ink">,
                                  constants::global_values<text_decoration_skip_ink>
{
    using super_property = types::property_base<"text-decoration-skip-ink">;

    text_decoration_skip_ink() = delete;
    text_decoration_skip_ink(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
    inline static constexpr types::property_constant none{key, "none"};
    inline static constexpr types::property_constant all{key, "all"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
