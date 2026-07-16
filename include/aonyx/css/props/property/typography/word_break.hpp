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

                    inline static constexpr types::property_constant normal{key, "normal"};
                    inline static constexpr types::property_constant break_all{key, "break-all"};
                    inline static constexpr types::property_constant keep_all{key, "keep-all"};
                    inline static constexpr types::property_constant break_word{key, "break-word"};
                };
            }
        }
    }
}
