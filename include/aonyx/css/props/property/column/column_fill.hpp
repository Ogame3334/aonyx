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
                struct column_fill : types::property_base<"column-fill">, constants::global_values<column_fill>
                {
                    using super_property = types::property_base<"column-fill">;

                    column_fill() = delete;
                    column_fill(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view balance = "balance";
                    inline static constexpr std::string_view balance_all = "balance-all";
                };
            }
        }
    }
}
