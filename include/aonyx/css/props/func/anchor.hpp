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
                std::string anchor(std::string_view anchor_name)
                {
                    return std::format("anchor({})", anchor_name);
                }

                std::string anchor(std::string_view anchor_name, std::string_view position)
                {
                    return std::format("anchor({} {})", anchor_name, position);
                }

                std::string anchor_size(std::string_view axis)
                {
                    return std::format("anchor-size({})", axis);
                }
            }
        }
    }
}
