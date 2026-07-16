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
                struct tab_size : types::property_base<"tab-size">, constants::global_values<tab_size>
                {
                    using super_property = types::property_base<"tab-size">;

                    tab_size() = delete;
                    tab_size(util::numerical v) : super_property(v.to_string()) {}
                    tab_size(std::string_view v) : super_property(std::string(v)) {}
                };
            }
        }
    }
}
