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
                struct text_spacing_trim : types::property_base<"text-spacing-trim">, constants::global_values<text_spacing_trim>
                {
                    using super_property = types::property_base<"text-spacing-trim">;

                    text_spacing_trim() = delete;
                    text_spacing_trim(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant normal{key, "normal"};
                    inline static constexpr types::property_constant space_all{key, "space-all"};
                    inline static constexpr types::property_constant trim_start{key, "trim-start"};
                    inline static constexpr types::property_constant trim_end{key, "trim-end"};
                    inline static constexpr types::property_constant trim_start_end{key, "trim-start-end"};
                    inline static constexpr types::property_constant trim_all{key, "trim-all"};
                };
            }
        }
    }
}
