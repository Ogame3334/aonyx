/** @brief CSS property: text-align-last
 *
 * text-align-last CSS property.
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
struct text_align_last : types::property_base<"text-align-last">, constants::global_values<text_align_last>
{
    using super_property = types::property_base<"text-align-last">;

    text_align_last() = delete;
    text_align_last(std::string_view v) : super_property(std::string(v))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
    inline static constexpr types::property_constant left{key, "left"};
    inline static constexpr types::property_constant right{key, "right"};
    inline static constexpr types::property_constant center{key, "center"};
    inline static constexpr types::property_constant justify{key, "justify"};
    inline static constexpr types::property_constant start{key, "start"};
    inline static constexpr types::property_constant end{key, "end"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
