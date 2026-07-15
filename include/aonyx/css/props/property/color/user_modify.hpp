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
                struct user_modify : types::property_base<"user-modify">, constants::global_values<user_modify>
                {
                    using super_property = types::property_base<"user-modify">;

                    user_modify() = delete;
                    user_modify(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view read_only = "read-only";
                    inline static constexpr std::string_view read_write = "read-write";
                    inline static constexpr std::string_view write_only = "write-only";
                };
            }
        }
    }
}
