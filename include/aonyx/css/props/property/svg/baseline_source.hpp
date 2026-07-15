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
                struct baseline_source : types::property_base<"baseline-source">, constants::global_values<baseline_source>
                {
                    using super_property = types::property_base<"baseline-source">;

                    baseline_source() = delete;
                    baseline_source(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view first = "first";
                    inline static constexpr std::string_view last = "last";
                };
            }
        }
    }
}
