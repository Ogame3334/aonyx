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
                struct inset_inline_end : types::property_base<"inset-inline-end">, constants::global_values<inset_inline_end>
                {
                    using super_property = types::property_base<"inset-inline-end">;

                    inset_inline_end() = delete;
                    inset_inline_end(util::numerical v) : super_property(v.to_string()) {}
                    inset_inline_end(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                };
            }
        }
    }
}
