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
                struct ruby_position : types::property_base<"ruby-position">, constants::global_values<ruby_position>
                {
                    using super_property = types::property_base<"ruby-position">;

                    ruby_position() = delete;
                    ruby_position(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant over{key, "over"};
                    inline static constexpr types::property_constant under{key, "under"};
                    inline static constexpr types::property_constant alt{key, "alt"};
                };
            }
        }
    }
}
