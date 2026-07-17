/** @brief CSS property: max-width
 *
 * max-width CSS property.
 */
#pragma once

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
struct max_width : types::property_base<"max-width">, constants::global_values<max_width>
{
    using super_property = types::property_base<"max-width">;

    max_width() = delete;
    max_width(util::numerical w) : super_property(w.to_string())
    {
    }
    max_width(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
    inline static constexpr types::property_constant fit_content{key, "fit-content"};
    inline static constexpr types::property_constant min_content{key, "min-content"};
    inline static constexpr types::property_constant max_content{key, "max-content"};
    inline static constexpr types::property_constant available{key, "available"};
    inline static constexpr types::property_constant stretch{key, "stretch"};
    inline static constexpr types::property_constant none{key, "none"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
