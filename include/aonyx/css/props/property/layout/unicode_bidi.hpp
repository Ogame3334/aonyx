/** @brief CSS property: unicode-bidi
 *
 * unicode-bidi CSS property.
 */
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
                struct unicode_bidi : types::property_base<"unicode-bidi">, constants::global_values<unicode_bidi>
                {
                    using super_property = types::property_base<"unicode-bidi">;

                    unicode_bidi() = delete;
                    unicode_bidi(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant normal{key, "normal"};
                    inline static constexpr types::property_constant embed{key, "embed"};
                    inline static constexpr types::property_constant isolate{key, "isolate"};
                    inline static constexpr types::property_constant bidi_override{key, "bidi-override"};
                    inline static constexpr types::property_constant isolate_override{key, "isolate-override"};
                    inline static constexpr types::property_constant plaintext{key, "plaintext"};
                };
            }
        }
    }
}
