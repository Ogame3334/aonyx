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
                struct user_select : types::property_base<"user-select">, constants::global_values<user_select>
                {
                    using super_property = types::property_base<"user-select">;

                    user_select() = delete;
                    user_select(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view text = "text";
                    inline static constexpr std::string_view all = "all";
                    inline static constexpr std::string_view contain = "contain";
                };
            }
        }
    }
}
