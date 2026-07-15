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
                std::string counter(std::string_view name)
                {
                    return std::format("counter({})", name);
                }

                std::string counter(std::string_view name, std::string_view style)
                {
                    return std::format("counter({}, {})", name, style);
                }

                std::string counters(std::string_view name, std::string_view separator)
                {
                    return std::format("counters({}, {})", name, separator);
                }

                std::string counters(std::string_view name, std::string_view separator, std::string_view style)
                {
                    return std::format("counters({}, {}, {})", name, separator, style);
                }

                std::string symbols(std::string_view type, std::string_view values)
                {
                    return std::format("symbols({}, {})", type, values);
                }

                std::string symbols(std::string_view values)
                {
                    return std::format("symbols({})", values);
                }
            }
        }
    }
}
