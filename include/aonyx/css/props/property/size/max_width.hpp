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
                struct max_width : types::property_base<"max-width">, constants::global_values<max_width>
                {
                    using super_property = types::property_base<"max-width">;

                    max_width() = delete;
                    max_width(util::numerical w) : super_property(w.to_string()) {}
                    max_width(std::string_view w) : super_property(std::string(w)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view fit_content = "fit-content";
                    inline static constexpr std::string_view min_content = "min-content";
                    inline static constexpr std::string_view max_content = "max-content";
                    inline static constexpr std::string_view available = "available";
                    inline static constexpr std::string_view stretch = "stretch";
                    inline static constexpr std::string_view none = "none";
                };
            }
        }
    }
}
