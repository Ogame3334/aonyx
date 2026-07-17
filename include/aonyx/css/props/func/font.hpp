/** @brief CSS function: font
 *
 * CSS function utilities for font.
 */
#pragma once

#include <format>
#include <string>
#include <string_view>

namespace aonyx
{
namespace css
{
namespace props
{
namespace func
{
std::string stylistic(std::string_view feature_value_name)
{
    return std::format("stylistic({})", feature_value_name);
}

std::string styleset(std::string_view feature_value_name)
{
    return std::format("styleset({})", feature_value_name);
}

std::string character_variant(std::string_view feature_value_name)
{
    return std::format("character-variant({})", feature_value_name);
}

std::string swash(std::string_view feature_value_name)
{
    return std::format("swash({})", feature_value_name);
}

std::string ornaments(std::string_view feature_value_name)
{
    return std::format("ornaments({})", feature_value_name);
}

std::string annotation(std::string_view feature_value_name)
{
    return std::format("annotation({})", feature_value_name);
}
} // namespace func
} // namespace props
} // namespace css
} // namespace aonyx
