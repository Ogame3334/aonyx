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
                struct word_break : types::property_base<"word-break">, constants::global_values<word_break>
                {
                    using super_property = types::property_base<"word-break">;

                    word_break() = delete;
                    word_break(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view normal = "normal";
                    inline static constexpr std::string_view break_all = "break-all";
                    inline static constexpr std::string_view keep_all = "keep-all";
                    inline static constexpr std::string_view break_word = "break-word";
                };
            }
        }
    }
}
