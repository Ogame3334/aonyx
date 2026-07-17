/** @brief CSS function: color
 *
 * CSS function utilities for color.
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
std::string rgb(util::numerical r, util::numerical g, util::numerical b)
{
    return std::format("rgb({} {} {})", r, g, b);
}

std::string rgb(util::numerical r, util::numerical g, util::numerical b, util::numerical alpha)
{
    return std::format("rgb({} {} {} / {})", r, g, b, alpha);
}

std::string hsl(util::numerical h, util::numerical s, util::numerical l)
{
    return std::format("hsl({} {} {})", h, s, l);
}

std::string hsl(util::numerical h, util::numerical s, util::numerical l, util::numerical alpha)
{
    return std::format("hsl({} {} {} / {})", h, s, l, alpha);
}

std::string hwb(util::numerical h, util::numerical w, util::numerical b)
{
    return std::format("hwb({} {} {})", h, w, b);
}

std::string hwb(util::numerical h, util::numerical w, util::numerical b, util::numerical alpha)
{
    return std::format("hwb({} {} {} / {})", h, w, b, alpha);
}

std::string lab(util::numerical l, util::numerical a, util::numerical b)
{
    return std::format("lab({} {} {})", l, a, b);
}

std::string lab(util::numerical l, util::numerical a, util::numerical b, util::numerical alpha)
{
    return std::format("lab({} {} {} / {})", l, a, b, alpha);
}

std::string lch(util::numerical l, util::numerical c, util::numerical h)
{
    return std::format("lch({} {} {})", l, c, h);
}

std::string lch(util::numerical l, util::numerical c, util::numerical h, util::numerical alpha)
{
    return std::format("lch({} {} {} / {})", l, c, h, alpha);
}

std::string oklab(util::numerical l, util::numerical a, util::numerical b)
{
    return std::format("oklab({} {} {})", l, a, b);
}

std::string oklab(util::numerical l, util::numerical a, util::numerical b, util::numerical alpha)
{
    return std::format("oklab({} {} {} / {})", l, a, b, alpha);
}

std::string oklch(util::numerical l, util::numerical c, util::numerical h)
{
    return std::format("oklch({} {} {})", l, c, h);
}

std::string oklch(util::numerical l, util::numerical c, util::numerical h, util::numerical alpha)
{
    return std::format("oklch({} {} {} / {})", l, c, h, alpha);
}

std::string color(std::string_view colorspace, util::numerical c1, util::numerical c2, util::numerical c3)
{
    return std::format("color({} {} {} {})", colorspace, c1, c2, c3);
}

std::string
color(std::string_view colorspace, util::numerical c1, util::numerical c2, util::numerical c3, util::numerical alpha)
{
    return std::format("color({} {} {} {} / {})", colorspace, c1, c2, c3, alpha);
}

std::string color_mix(std::string_view method, std::string_view color1, std::string_view color2)
{
    return std::format("color-mix(in {}, {}, {})", method, color1, color2);
}

std::string
color_mix(std::string_view method, std::string_view color1, std::string_view color2, std::string_view color3)
{
    return std::format("color-mix(in {}, {}, {}, {})", method, color1, color2, color3);
}

std::string light_dark(std::string_view light, std::string_view dark)
{
    return std::format("light-dark({}, {})", light, dark);
}

std::string contrast_color(std::string_view color)
{
    return std::format("contrast-color({})", color);
}

std::string dynamic_range_limit_mix(std::string_view limit1,
                                    std::string_view percent1,
                                    std::string_view limit2,
                                    std::string_view percent2)
{
    return std::format("dynamic-range-limit-mix({} {}, {} {})", limit1, percent1, limit2, percent2);
}
} // namespace func
} // namespace props
} // namespace css
} // namespace aonyx
