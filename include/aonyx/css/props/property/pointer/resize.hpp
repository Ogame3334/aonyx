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
                struct resize : types::property_base<"resize">, constants::global_values<resize>
                {
                    using super_property = types::property_base<"resize">;

                    resize() = delete;
                    resize(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                    inline static constexpr types::property_constant both{key, "both"};
                    inline static constexpr types::property_constant horizontal{key, "horizontal"};
                    inline static constexpr types::property_constant vertical{key, "vertical"};
                    inline static constexpr types::property_constant block{key, "block"};
                    inline static constexpr types::property_constant inline_{key, "inline"};
                };
            }
        }
    }
}
