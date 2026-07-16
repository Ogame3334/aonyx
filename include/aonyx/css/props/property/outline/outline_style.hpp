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
                struct outline_style : types::property_base<"outline-style">, constants::global_values<outline_style>
                {
                    using super_property = types::property_base<"outline-style">;

                    outline_style() = delete;
                    outline_style(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant dotted{key, "dotted"};
                    inline static constexpr types::property_constant dashed{key, "dashed"};
                    inline static constexpr types::property_constant solid{key, "solid"};
                    inline static constexpr types::property_constant double_{key, "double"};
                    inline static constexpr types::property_constant groove{key, "groove"};
                    inline static constexpr types::property_constant ridge{key, "ridge"};
                    inline static constexpr types::property_constant inset{key, "inset"};
                    inline static constexpr types::property_constant outset{key, "outset"};
                };
            }
        }
    }
}
