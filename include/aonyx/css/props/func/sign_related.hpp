/** @brief CSS function: sign-related
 *
 * CSS function utilities for sign-related.
 */
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
