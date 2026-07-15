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

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view isolate = "isolate";
                };
            }
        }
    }
}
