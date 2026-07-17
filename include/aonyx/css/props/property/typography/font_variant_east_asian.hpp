/** @brief CSS property: font-variant-east-asian
 *
 * font-variant-east-asian CSS property.
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
                struct font_variant_east_asian : types::property_base<"font-variant-east-asian">, constants::global_values<font_variant_east_asian>
                {
                    using super_property = types::property_base<"font-variant-east-asian">;

                    font_variant_east_asian() = delete;
                    font_variant_east_asian(std::string_view v) : super_property(std::string(v)) {}
                    font_variant_east_asian(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    font_variant_east_asian(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}

                    inline static constexpr types::property_constant normal{key, "normal"};
                    inline static constexpr types::property_constant jis78{key, "jis78"};
                    inline static constexpr types::property_constant jis83{key, "jis83"};
                    inline static constexpr types::property_constant jis90{key, "jis90"};
                    inline static constexpr types::property_constant jis04{key, "jis04"};
                    inline static constexpr types::property_constant simplified{key, "simplified"};
                    inline static constexpr types::property_constant traditional{key, "traditional"};
                    inline static constexpr types::property_constant full_width{key, "full-width"};
                    inline static constexpr types::property_constant proportional_width{key, "proportional-width"};
                    inline static constexpr types::property_constant ruby{key, "ruby"};
                };
            }
        }
    }
}
