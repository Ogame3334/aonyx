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
                std::string scroll(std::string_view axis)
                {
                    return std::format("scroll({})", axis);
                }

                std::string view(std::string_view axis)
                {
                    return std::format("view({})", axis);
                }
            }
        }
    }
}
