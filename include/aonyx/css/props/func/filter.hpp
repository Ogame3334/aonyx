/** @brief CSS function: filter
 *
 * CSS function utilities for filter.
 */
#pragma once

#include <format>
#include <string>
#include <string_view>

#include <aonyx/util/numerical.hpp>

namespace aonyx
{
namespace css
{
namespace props
{
namespace func
{
std::string blur(util::numerical radius)
{
    return std::format("blur({})", radius);
}

std::string brightness(util::numerical amount)
{
    return std::format("brightness({})", amount);
}

std::string contrast(util::numerical amount)
{
    return std::format("contrast({})", amount);
}

std::string
drop_shadow(util::numerical offset_x, util::numerical offset_y, util::numerical blur_radius, std::string_view color)
{
    return std::format("drop-shadow({} {} {} {})", offset_x, offset_y, blur_radius, color);
}

std::string drop_shadow(util::numerical offset_x, util::numerical offset_y, std::string_view color)
{
    return std::format("drop-shadow({} {} {})", offset_x, offset_y, color);
}

std::string drop_shadow(util::numerical offset_x, util::numerical offset_y, util::numerical blur_radius)
{
    return std::format("drop-shadow({} {} {})", offset_x, offset_y, blur_radius);
}

std::string drop_shadow(util::numerical offset_x, util::numerical offset_y)
{
    return std::format("drop-shadow({} {})", offset_x, offset_y);
}

std::string grayscale(util::numerical amount)
{
    return std::format("grayscale({})", amount);
}

std::string hue_rotate(util::numerical angle)
{
    return std::format("hue-rotate({})", angle);
}

std::string invert(util::numerical amount)
{
    return std::format("invert({})", amount);
}

std::string opacity(util::numerical amount)
{
    return std::format("opacity({})", amount);
}

std::string saturate(util::numerical amount)
{
    return std::format("saturate({})", amount);
}

std::string sepia(util::numerical amount)
{
    return std::format("sepia({})", amount);
}
} // namespace func
} // namespace props
} // namespace css
} // namespace aonyx
