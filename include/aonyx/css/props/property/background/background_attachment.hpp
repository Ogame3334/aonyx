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
                struct background_attachment : types::property_base<"background-attachment">, constants::global_values<background_attachment>
                {
                    using super_property = types::property_base<"background-attachment">;

                    background_attachment() = delete;
                    background_attachment(std::string_view v) : super_property(std::string(v)) {}
                    background_attachment(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2)) {}
                    background_attachment(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{}, {}, {}", v1, v2, v3)) {}

                    inline static constexpr types::property_constant scroll{key, "scroll"};
                    inline static constexpr types::property_constant fixed{key, "fixed"};
                    inline static constexpr types::property_constant local{key, "local"};
                };
            }
        }
    }
}
