#pragma once

#include <string>
#include <format>
#include <string_view>

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
                struct inset : types::property_base<"inset">, constants::global_values<inset>
                {
                    using super_property = types::property_base<"inset">;

                    inset() = delete;
                    inset(util::numerical v) : super_property(v.to_string()) {}
                    inset(util::numerical vertical, util::numerical horizontal) : super_property(std::format("{} {}", vertical, horizontal)) {}
                    inset(util::numerical top, util::numerical horizontal, util::numerical bottom) : super_property(std::format("{} {} {}", top, horizontal, bottom)) {}
                    inset(util::numerical top, util::numerical right, util::numerical bottom, util::numerical left) : super_property(std::format("{} {} {} {}", top, right, bottom, left)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                };
            }
        }
    }
}
