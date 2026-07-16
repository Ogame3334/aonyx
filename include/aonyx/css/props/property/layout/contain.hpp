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
                struct contain : types::property_base<"contain">, constants::global_values<contain>
                {
                    using super_property = types::property_base<"contain">;

                    contain() = delete;
                    contain(std::string_view v) : super_property(std::string(v)) {}
                    contain(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    contain(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                    inline static constexpr types::property_constant strict{key, "strict"};
                    inline static constexpr types::property_constant content{key, "content"};
                    inline static constexpr types::property_constant size{key, "size"};
                    inline static constexpr types::property_constant inline_size{key, "inline-size"};
                    inline static constexpr types::property_constant layout{key, "layout"};
                    inline static constexpr types::property_constant style{key, "style"};
                    inline static constexpr types::property_constant paint{key, "paint"};
                };
            }
        }
    }
}
