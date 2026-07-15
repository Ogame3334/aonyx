#pragma once

#include <string>
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
                struct inset_inline_start : types::property_base<"inset-inline-start">, constants::global_values<inset_inline_start>
                {
                    using super_property = types::property_base<"inset-inline-start">;

                    inset_inline_start() = delete;
                    inset_inline_start(util::numerical v) : super_property(v.to_string()) {}
                    inset_inline_start(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                };
            }
        }
    }
}
