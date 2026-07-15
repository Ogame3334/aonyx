#pragma once

#include <format>
#include <string>

#include <aonyx/util/numerical.hpp>

namespace aonyx
{
    namespace css
    {
        namespace props
        {
            namespace func
            {
                std::string sin(util::numerical angle)
                {
                    return std::format("sin({})", angle);
                }

                std::string cos(util::numerical angle)
                {
                    return std::format("cos({})", angle);
                }

                std::string tan(util::numerical angle)
                {
                    return std::format("tan({})", angle);
                }

                std::string asin(util::numerical number)
                {
                    return std::format("asin({})", number);
                }

                std::string acos(util::numerical number)
                {
                    return std::format("acos({})", number);
                }

                std::string atan(util::numerical number)
                {
                    return std::format("atan({})", number);
                }

                std::string atan2(util::numerical y, util::numerical x)
                {
                    return std::format("atan2({}, {})", y, x);
                }
            }
        }
    }
}
