/** @brief CSS function: tree
 *
 * CSS function utilities for tree.
 */
#pragma once

#include <string>

namespace aonyx
{
    namespace css
    {
        namespace props
        {
            namespace func
            {
                std::string sibling_index()
                {
                    return "sibling-index()";
                }

                std::string sibling_count()
                {
                    return "sibling-count()";
                }
            }
        }
    }
}
