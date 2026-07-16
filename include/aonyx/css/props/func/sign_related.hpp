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
                std::string abs(util::numerical n)
                {
                    return std::format("abs({})", n);
                }

                std::string sign(util::numerical n)
                {
                    return std::format("sign({})", n);
                }
            }
        }
    }
}
