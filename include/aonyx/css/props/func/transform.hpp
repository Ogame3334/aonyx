#pragma once

#include <string>
#include <string_view>
#include <format>

#include <aonyx/util/numerical.hpp>

namespace aonyx
{
    namespace css
    {
        namespace props
        {
            namespace func
            {
                std::string translate(std::string_view tx)
                {
                    return std::format("translate({})", tx);
                }

                std::string translate(std::string_view tx, std::string_view ty)
                {
                    return std::format("translate({}, {})", tx, ty);
                }

                std::string translate_x(std::string_view tx)
                {
                    return std::format("translateX({})", tx);
                }

                std::string translate_y(std::string_view ty)
                {
                    return std::format("translateY({})", ty);
                }

                std::string translate_z(std::string_view tz)
                {
                    return std::format("translateZ({})", tz);
                }

                std::string translate3d(std::string_view tx, std::string_view ty, std::string_view tz)
                {
                    return std::format("translate3d({}, {}, {})", tx, ty, tz);
                }

                std::string rotate(std::string_view angle)
                {
                    return std::format("rotate({})", angle);
                }

                std::string rotate_x(std::string_view angle)
                {
                    return std::format("rotateX({})", angle);
                }

                std::string rotate_y(std::string_view angle)
                {
                    return std::format("rotateY({})", angle);
                }

                std::string rotate_z(std::string_view angle)
                {
                    return std::format("rotateZ({})", angle);
                }

                std::string rotate3d(util::numerical x, util::numerical y, util::numerical z, std::string_view angle)
                {
                    return std::format("rotate3d({}, {}, {}, {})", x, y, z, angle);
                }

                std::string scale(util::numerical sx)
                {
                    return std::format("scale({})", sx);
                }

                std::string scale(util::numerical sx, util::numerical sy)
                {
                    return std::format("scale({}, {})", sx, sy);
                }

                std::string scale_x(util::numerical sx)
                {
                    return std::format("scaleX({})", sx);
                }

                std::string scale_y(util::numerical sy)
                {
                    return std::format("scaleY({})", sy);
                }

                std::string scale_z(util::numerical sz)
                {
                    return std::format("scaleZ({})", sz);
                }

                std::string scale3d(util::numerical sx, util::numerical sy, util::numerical sz)
                {
                    return std::format("scale3d({}, {}, {})", sx, sy, sz);
                }

                std::string skew(std::string_view ax)
                {
                    return std::format("skew({})", ax);
                }

                std::string skew(std::string_view ax, std::string_view ay)
                {
                    return std::format("skew({}, {})", ax, ay);
                }

                std::string skew_x(std::string_view ax)
                {
                    return std::format("skewX({})", ax);
                }

                std::string skew_y(std::string_view ay)
                {
                    return std::format("skewY({})", ay);
                }

                std::string matrix(util::numerical a, util::numerical b, util::numerical c, util::numerical d, util::numerical tx, util::numerical ty)
                {
                    return std::format("matrix({}, {}, {}, {}, {}, {})", a, b, c, d, tx, ty);
                }

                std::string matrix3d(
                    util::numerical a1, util::numerical b1, util::numerical c1, util::numerical d1,
                    util::numerical a2, util::numerical b2, util::numerical c2, util::numerical d2,
                    util::numerical a3, util::numerical b3, util::numerical c3, util::numerical d3,
                    util::numerical a4, util::numerical b4, util::numerical c4, util::numerical d4)
                {
                    return std::format("matrix3d({}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {})",
                                       a1, b1, c1, d1, a2, b2, c2, d2, a3, b3, c3, d3, a4, b4, c4, d4);
                }

                std::string perspective(std::string_view length)
                {
                    return std::format("perspective({})", length);
                }
            }
        }
    }
}
