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
                struct list_style_type : types::property_base<"list-style-type">, constants::global_values<list_style_type>
                {
                    using super_property = types::property_base<"list-style-type">;

                    list_style_type() = delete;
                    list_style_type(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                    inline static constexpr types::property_constant disc{key, "disc"};
                    inline static constexpr types::property_constant circle{key, "circle"};
                    inline static constexpr types::property_constant square{key, "square"};
                    inline static constexpr types::property_constant decimal{key, "decimal"};
                    inline static constexpr types::property_constant decimal_leading_zero{key, "decimal-leading-zero"};
                    inline static constexpr types::property_constant lower_alpha{key, "lower-alpha"};
                    inline static constexpr types::property_constant upper_alpha{key, "upper-alpha"};
                    inline static constexpr types::property_constant lower_greek{key, "lower-greek"};
                    inline static constexpr types::property_constant lower_latin{key, "lower-latin"};
                    inline static constexpr types::property_constant upper_latin{key, "upper-latin"};
                    inline static constexpr types::property_constant lower_roman{key, "lower-roman"};
                    inline static constexpr types::property_constant upper_roman{key, "upper-roman"};
                    inline static constexpr types::property_constant disclosure_open{key, "disclosure-open"};
                    inline static constexpr types::property_constant disclosure_closed{key, "disclosure-closed"};
                };
            }
        }
    }
}
