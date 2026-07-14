#pragma once

#include <format>

#include <aonyx/css/props/types/property.hpp>
#include <aonyx/css/props/constants/global_values.hpp>
#include <aonyx/util/numerical.hpp>

namespace aonyx
{
    namespace css
    {
        namespace props
        {
            namespace property
            {
                struct padding : types::property_base<"padding">, constants::global_values<padding>
                {
                    padding() = delete;
                    padding(util::numerical n)
                    {
                        value = n.to_string();
                    }
                    padding(util::numerical v, util::numerical h)
                    {
                        value = std::format("{} {}", v.to_string(), h.to_string());
                    }
                    padding(util::numerical u, util::numerical h, util::numerical b)
                    {
                        value = std::format("{} {} {}", u.to_string(), h.to_string(), b.to_string());
                    }
                    padding(util::numerical u, util::numerical r, util::numerical b, util::numerical l)
                    {
                        value = std::format("{} {} {} {}", u.to_string(), r.to_string(), b.to_string(), l.to_string());
                    }
                };
            }
        }
    }
}
