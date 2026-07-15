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
                struct column_wrap : types::property_base<"column-wrap">, constants::global_values<column_wrap>
                {
                    using super_property = types::property_base<"column-wrap">;

                    column_wrap() = delete;
                    column_wrap(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view nowrap = "nowrap";
                    inline static constexpr std::string_view wrap = "wrap";
                    inline static constexpr std::string_view balance = "balance";
                };
            }
        }
    }
}
