/** @brief CSS property: text-decoration-skip
 *
 * text-decoration-skip CSS property.
 */
#pragma once

#include <string>
#include <format>
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
                struct text_decoration_skip : types::property_base<"text-decoration-skip">, constants::global_values<text_decoration_skip>
                {
                    using super_property = types::property_base<"text-decoration-skip">;

                    text_decoration_skip() = delete;
                    text_decoration_skip(std::string_view v) : super_property(std::string(v)) {}
                    text_decoration_skip(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    text_decoration_skip(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}
                    text_decoration_skip(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4) : super_property(std::format("{} {} {} {}", v1, v2, v3, v4)) {}
                    text_decoration_skip(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4, std::string_view v5) : super_property(std::format("{} {} {} {} {}", v1, v2, v3, v4, v5)) {}
                    text_decoration_skip(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4, std::string_view v5, std::string_view v6) : super_property(std::format("{} {} {} {} {} {}", v1, v2, v3, v4, v5, v6)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                    inline static constexpr types::property_constant objects{key, "objects"};
                    inline static constexpr types::property_constant edges{key, "edges"};
                    inline static constexpr types::property_constant box_decoration{key, "box-decoration"};
                    inline static constexpr types::property_constant leading_whitespace{key, "leading-spaces"};
                    inline static constexpr types::property_constant trailing_whitespace{key, "trailing-spaces"};
                    inline static constexpr types::property_constant content{key, "content"};
                };
            }
        }
    }
}
