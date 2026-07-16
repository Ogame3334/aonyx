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
                struct text_indent : types::property_base<"text-indent">, constants::global_values<text_indent>
                {
                    using super_property = types::property_base<"text-indent">;

                    text_indent() = delete;
                    text_indent(util::numerical v) : super_property(v.to_string()) {}
                    text_indent(util::numerical v, bool hanging) : super_property(std::format("{} {}", v.to_string(), hanging ? "hanging" : "")) {}
                    text_indent(util::numerical v, bool hanging, bool each_line) : super_property(std::format("{} {} {}", v.to_string(), hanging ? "hanging" : "", each_line ? "each-line" : "")) {}
                };
            }
        }
    }
}
