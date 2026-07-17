/** @brief CSS function: image
 *
 * CSS function utilities for image.
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
                std::string image(std::string_view src)
                {
                    return std::format("image({})", src);
                }

                std::string image(std::string_view direction, std::string_view src)
                {
                    return std::format("image({} {})", direction, src);
                }

                std::string image_set(std::string_view options)
                {
                    return std::format("image-set({})", options);
                }

                std::string cross_fade(std::string_view images)
                {
                    return std::format("cross-fade({})", images);
                }

                std::string element(std::string_view id)
                {
                    return std::format("element({})", id);
                }

                std::string paint(std::string_view worklet_name)
                {
                    return std::format("paint({})", worklet_name);
                }

                std::string paint(std::string_view worklet_name, std::string_view parameters)
                {
                    return std::format("paint({}, {})", worklet_name, parameters);
                }
            }
        }
    }
}
