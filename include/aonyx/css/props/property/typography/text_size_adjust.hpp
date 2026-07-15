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
                struct text_size_adjust : types::property_base<"text-size-adjust">, constants::global_values<text_size_adjust>
                {
                    using super_property = types::property_base<"text-size-adjust">;

                    text_size_adjust() = delete;
                    text_size_adjust(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view auto_ = "auto";
                };
            }
        }
    }
}
