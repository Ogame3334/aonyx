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
                struct letter_spacing : types::property_base<"letter-spacing">, constants::global_values<letter_spacing>
                {
                    using super_property = types::property_base<"letter-spacing">;

                    letter_spacing() = delete;
                    letter_spacing(util::numerical v) : super_property(v.to_string()) {}
                    letter_spacing(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant normal{key, "normal"};
                };
            }
        }
    }
}
