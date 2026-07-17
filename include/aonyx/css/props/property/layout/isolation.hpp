/** @brief CSS property: isolation
 *
 * isolation CSS property.
 */
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
                struct isolation : types::property_base<"isolation">, constants::global_values<isolation>
                {
                    using super_property = types::property_base<"isolation">;

                    isolation() = delete;
                    isolation(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant isolate{key, "isolate"};
                };
            }
        }
    }
}
