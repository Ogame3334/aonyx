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
                struct overflow_wrap : types::property_base<"overflow-wrap">, constants::global_values<overflow_wrap>
                {
                    using super_property = types::property_base<"overflow-wrap">;

                    overflow_wrap() = delete;
                    overflow_wrap(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view normal = "normal";
                    inline static constexpr std::string_view break_word = "break-word";
                    inline static constexpr std::string_view anywhere = "anywhere";
                };
            }
        }
    }
}
