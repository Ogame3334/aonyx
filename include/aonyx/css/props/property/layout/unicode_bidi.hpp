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

                    inline static constexpr std::string_view normal = "normal";
                    inline static constexpr std::string_view embed = "embed";
                    inline static constexpr std::string_view isolate = "isolate";
                    inline static constexpr std::string_view bidi_override = "bidi-override";
                    inline static constexpr std::string_view isolate_override = "isolate-override";
                    inline static constexpr std::string_view plaintext = "plaintext";
                };
            }
        }
    }
}
