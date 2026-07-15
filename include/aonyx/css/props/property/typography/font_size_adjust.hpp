#pragma once

#include <string>
#include <format>
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
                struct font_size_adjust : types::property_base<"font-size-adjust">, constants::global_values<font_size_adjust>
                {
                    using super_property = types::property_base<"font-size-adjust">;

                    font_size_adjust() = delete;
                    font_size_adjust(util::numerical v) : super_property(v.to_string()) {}
                    font_size_adjust(std::string_view metric, util::numerical v) : super_property(std::format("{} {}", metric, v)) {}

                    inline static constexpr std::string_view ex_height = "ex-height";
                    inline static constexpr std::string_view cap_height = "cap-height";
                    inline static constexpr std::string_view ic_width = "ic-width";
                    inline static constexpr std::string_view ic_height = "ic-height";
                    inline static constexpr std::string_view alphabetic = "alphabetic";
                    inline static constexpr std::string_view numeric = "numeric";
                    inline static constexpr std::string_view none = "none";
                };
            }
        }
    }
}
