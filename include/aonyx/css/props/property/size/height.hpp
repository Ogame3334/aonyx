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
                struct height : types::property_base<"height">, constants::global_values<height>
                {
                    using super_property = types::property_base<"height">;

                    height() = delete;
                    height(util::numerical h) : super_property(h.to_string()) {}
                    height(std::string_view h) : super_property(std::string(h)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view fit_content = "fit-content";
                    inline static constexpr std::string_view min_content = "min-content";
                    inline static constexpr std::string_view max_content = "max-content";
                    inline static constexpr std::string_view available = "available";
                    inline static constexpr std::string_view stretch = "stretch";
                };
            }
        }
    }
}
