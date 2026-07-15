#pragma once

#include <format>
#include <string>

#include <aonyx/util/concepts.hpp>
#include <aonyx/util/numerical.hpp>

namespace aonyx
{
    namespace css
    {
        namespace props
        {
            namespace func
            {
                template <util::like<util::numerical>... Args>
                std::string min(Args... args)
                {
                    std::string result = "min(";
                    bool first = true;
                    ((result += (first ? "" : ", ") + args.to_string(), first = false), ...);
                    result += ")";
                    return result;
                }

                template <util::like<util::numerical>... Args>
                std::string max(Args... args)
                {
                    std::string result = "max(";
                    bool first = true;
                    ((result += (first ? "" : ", ") + args.to_string(), first = false), ...);
                    result += ")";
                    return result;
                }

                std::string clamp(util::numerical min_val, util::numerical val, util::numerical max_val)
                {
                    return std::format("clamp({}, {}, {})", min_val, val, max_val);
                }
            }
        }
    }
}
