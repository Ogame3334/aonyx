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
                struct line_break : types::property_base<"line-break">, constants::global_values<line_break>
                {
                    using super_property = types::property_base<"line-break">;

                    line_break() = delete;
                    line_break(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view loose = "loose";
                    inline static constexpr std::string_view normal = "normal";
                    inline static constexpr std::string_view strict = "strict";
                    inline static constexpr std::string_view anywhere = "anywhere";
                };
            }
        }
    }
}
