/** @brief CSS property: hanging-punctuation
 *
 * hanging-punctuation CSS property.
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
struct hanging_punctuation : types::property_base<"hanging-punctuation">, constants::global_values<hanging_punctuation>
{
    using super_property = types::property_base<"hanging-punctuation">;

    hanging_punctuation() = delete;
    hanging_punctuation(std::string_view v) : super_property(std::string(v))
    {
    }
    hanging_punctuation(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }
    hanging_punctuation(std::string_view v1, std::string_view v2, std::string_view v3)
        : super_property(std::format("{} {} {}", v1, v2, v3))
    {
    }
    hanging_punctuation(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4)
        : super_property(std::format("{} {} {} {}", v1, v2, v3, v4))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
    inline static constexpr types::property_constant first{key, "first"};
    inline static constexpr types::property_constant last{key, "last"};
    inline static constexpr types::property_constant allow_end{key, "allow-end"};
    inline static constexpr types::property_constant force_end{key, "force-end"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
