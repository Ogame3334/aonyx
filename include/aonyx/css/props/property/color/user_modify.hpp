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

                    inline static constexpr types::property_constant read_only{key, "read-only"};
                    inline static constexpr types::property_constant read_write{key, "read-write"};
                    inline static constexpr types::property_constant write_only{key, "write-only"};
                };
            }
        }
    }
}
