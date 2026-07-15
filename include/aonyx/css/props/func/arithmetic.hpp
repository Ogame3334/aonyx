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
                std::string calc(util::numerical expression)
                {
                    return std::format("calc({})", expression);
                }
            }
        }
    }
}
