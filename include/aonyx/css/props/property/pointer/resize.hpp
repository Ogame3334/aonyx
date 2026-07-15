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
                struct resize : types::property_base<"resize">, constants::global_values<resize>
                {
                    using super_property = types::property_base<"resize">;

                    resize() = delete;
                    resize(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view both = "both";
                    inline static constexpr std::string_view horizontal = "horizontal";
                    inline static constexpr std::string_view vertical = "vertical";
                    inline static constexpr std::string_view block = "block";
                    inline static constexpr std::string_view inline_ = "inline";
                };
            }
        }
    }
}
