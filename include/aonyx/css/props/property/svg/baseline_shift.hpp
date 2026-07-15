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
                struct baseline_shift : types::property_base<"baseline-shift">, constants::global_values<baseline_shift>
                {
                    using super_property = types::property_base<"baseline-shift">;

                    baseline_shift() = delete;
                    baseline_shift(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view sub = "sub";
                    inline static constexpr std::string_view super = "super";
                };
            }
        }
    }
}
