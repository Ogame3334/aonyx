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
                struct speak_as : types::property_base<"speak-as">, constants::global_values<speak_as>
                {
                    using super_property = types::property_base<"speak-as">;

                    speak_as() = delete;
                    speak_as(std::string_view v) : super_property(std::string(v)) {}
                    speak_as(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    speak_as(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant normal{key, "normal"};
                    inline static constexpr types::property_constant spell_out{key, "spell-out"};
                    inline static constexpr types::property_constant digits{key, "digits"};
                    inline static constexpr types::property_constant literal_punctuation{key, "literal-punctuation"};
                    inline static constexpr types::property_constant no_punctuation{key, "no-punctuation"};
                };
            }
        }
    }
}
