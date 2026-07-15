#pragma once

#include <string>
#include <string_view>

#include <aonyx/css/props/types/property.hpp>
#include <aonyx/css/props/constants/global_values.hpp>
#include <aonyx/util/numerical.hpp>

namespace aonyx
{
    namespace css
    {
        namespace props
        {
            namespace property
            {
                struct word_spacing : types::property_base<"word-spacing">, constants::global_values<word_spacing>
                {
                    using super_property = types::property_base<"word-spacing">;

                    word_spacing() = delete;
                    word_spacing(util::numerical v) : super_property(v.to_string()) {}
                    word_spacing(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view normal = "normal";
                };
            }
        }
    }
}
