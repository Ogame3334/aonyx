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
                    using super_property = types::property_base<"padding">;

                    padding() = delete;
                    padding(util::numerical n) : super_property(n.to_string())
                    {
                    }
                    padding(util::numerical v, util::numerical h) : super_property(std::format("{} {}", v, h))
                    {
                    }
                    padding(util::numerical u, util::numerical h, util::numerical b) : super_property(std::format("{} {} {}", u, h, b))
                    {
                    }
                    padding(util::numerical u, util::numerical r, util::numerical b, util::numerical l) : super_property(std::format("{} {} {} {}", u, r, b, l))
                    {
                    }
                };
            }
        }
    }
}
