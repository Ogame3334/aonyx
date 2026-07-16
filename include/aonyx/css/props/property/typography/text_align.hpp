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
                struct text_align : types::property_base<"text-align">, constants::global_values<text_align>
                {
                    using super_property = types::property_base<"text-align">;

                    text_align() = delete;
                    text_align(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant left{key, "left"};
                    inline static constexpr types::property_constant right{key, "right"};
                    inline static constexpr types::property_constant center{key, "center"};
                    inline static constexpr types::property_constant justify{key, "justify"};
                    inline static constexpr types::property_constant start{key, "start"};
                    inline static constexpr types::property_constant end{key, "end"};
                    inline static constexpr types::property_constant match_parent{key, "match-parent"};
                    inline static constexpr types::property_constant justify_all{key, "justify-all"};
                };
            }
        }
    }
}
