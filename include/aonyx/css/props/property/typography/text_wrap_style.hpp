#pragma once

#include <string>
#include <string_view>

#include <aonyx/css/props/types/property.hpp>
#include <aonyx/css/props/constants/global_values.hpp>

namespace aonyx
{
    namespace css
    {
        namespace props
        {
            namespace property
            {
                struct text_wrap_style : types::property_base<"text-wrap-style">, constants::global_values<text_wrap_style>
                {
                    using super_property = types::property_base<"text-wrap-style">;

                    text_wrap_style() = delete;
                    text_wrap_style(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant balance{key, "balance"};
                    inline static constexpr types::property_constant pretty{key, "pretty"};
                    inline static constexpr types::property_constant stable{key, "stable"};
                };
            }
        }
    }
}
