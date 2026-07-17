/** @brief CSS property: flex-basis
 *
 * flex-basis CSS property.
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
struct flex_basis : types::property_base<"flex-basis">, constants::global_values<flex_basis>
{
    using super_property = types::property_base<"flex-basis">;

    flex_basis() = delete;
    flex_basis(util::numerical v) : super_property(v.to_string())
    {
    }
    flex_basis(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
    inline static constexpr types::property_constant fit_content{key, "fit-content"};
    inline static constexpr types::property_constant max_content{key, "max-content"};
    inline static constexpr types::property_constant min_content{key, "min-content"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
