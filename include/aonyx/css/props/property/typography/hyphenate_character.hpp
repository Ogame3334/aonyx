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
                struct hyphenate_character : types::property_base<"hyphenate-character">, constants::global_values<hyphenate_character>
                {
                    using super_property = types::property_base<"hyphenate-character">;

                    hyphenate_character() = delete;
                    hyphenate_character(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                };
            }
        }
    }
}
