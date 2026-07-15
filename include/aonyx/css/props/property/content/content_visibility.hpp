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
                struct content_visibility : types::property_base<"content-visibility">, constants::global_values<content_visibility>
                {
                    using super_property = types::property_base<"content-visibility">;

                    content_visibility() = delete;
                    content_visibility(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view visible = "visible";
                    inline static constexpr std::string_view hidden = "hidden";
                    inline static constexpr std::string_view auto_ = "auto";
                };
            }
        }
    }
}
