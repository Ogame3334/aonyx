/** @brief Convenience alias for nlohmann::json within the aonyx namespace. */
#pragma once

#include <nlohmann/json.hpp>

namespace aonyx
{
    /** @brief JSON value type (alias for nlohmann::json). */
    using json = nlohmann::json;
}
