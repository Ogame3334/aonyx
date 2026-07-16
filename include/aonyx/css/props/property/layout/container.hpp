#pragma once

#include <string>
#include <format>
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
                struct container : types::property_base<"container">, constants::global_values<container>
                {
                    using super_property = types::property_base<"container">;

                    container() = delete;
                    container(std::string_view type, std::string_view name) : super_property(std::format("{} / {}", type, name)) {}
                    container(std::string_view name) : super_property(std::string(name)) {}
                };
            }
        }
    }
}
