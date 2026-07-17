/**
 * @brief HTTP header type definition.
 */

#pragma once

#include <string>
#include <unordered_map>

namespace aonyx
{
    namespace http
    {
        /** @brief Map of header names to their values. */
        using headers = std::unordered_map<std::string, std::string>;
    }
}
