#pragma once

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
                struct margin_trim : types::property_base<"margin-trim">, constants::global_values<margin_trim>
                {
                    using super_property = types::property_base<"margin-trim">;

                    margin_trim() = delete;
                    margin_trim(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                    inline static constexpr types::property_constant block{key, "block"};
                    inline static constexpr types::property_constant block_start{key, "block-start"};
                    inline static constexpr types::property_constant block_end{key, "block-end"};
                    inline static constexpr types::property_constant inline_{key, "inline"};
                    inline static constexpr types::property_constant inline_start{key, "inline-start"};
                    inline static constexpr types::property_constant inline_end{key, "inline-end"};
                };
            }
        }
    }
}
