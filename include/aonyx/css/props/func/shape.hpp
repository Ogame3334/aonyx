/** @brief CSS function: shape
 *
 * CSS function utilities for shape.
 */
#pragma once

#include <string>
#include <string_view>
#include <format>

namespace aonyx
{
    namespace css
    {
        namespace props
        {
            namespace func
            {
                std::string circle(std::string_view shape_or_radius)
                {
                    return std::format("circle({})", shape_or_radius);
                }

                std::string circle(std::string_view shape_or_radius, std::string_view position)
                {
                    return std::format("circle({} at {})", shape_or_radius, position);
                }

                std::string ellipse(std::string_view shape_or_radius)
                {
                    return std::format("ellipse({})", shape_or_radius);
                }

                std::string ellipse(std::string_view shape_or_radius, std::string_view position)
                {
                    return std::format("ellipse({} at {})", shape_or_radius, position);
                }

                std::string inset(std::string_view values)
                {
                    return std::format("inset({})", values);
                }

                std::string inset(std::string_view values, std::string_view round)
                {
                    return std::format("inset({} round {})", values, round);
                }

                std::string rect(std::string_view values)
                {
                    return std::format("rect({})", values);
                }

                std::string xywh(std::string_view values)
                {
                    return std::format("xywh({})", values);
                }

                std::string polygon(std::string_view values)
                {
                    return std::format("polygon({})", values);
                }

                std::string path(std::string_view d)
                {
                    return std::format("path({})", d);
                }

                std::string shape(std::string_view commands)
                {
                    return std::format("shape({})", commands);
                }

                std::string ray(std::string_view size_or_keyword)
                {
                    return std::format("ray({})", size_or_keyword);
                }

                std::string ray(std::string_view size_or_keyword, std::string_view position)
                {
                    return std::format("ray({} at {})", size_or_keyword, position);
                }

                std::string superellipse(std::string_view values)
                {
                    return std::format("superellipse({})", values);
                }
            }
        }
    }
}
