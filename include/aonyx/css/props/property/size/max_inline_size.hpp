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
                struct max_inline_size : types::property_base<"max-inline-size">, constants::global_values<max_inline_size>
                {
                    using super_property = types::property_base<"max-inline-size">;

                    max_inline_size() = delete;
                    max_inline_size(util::numerical s) : super_property(s.to_string()) {}
                    max_inline_size(std::string_view s) : super_property(std::string(s)) {}

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
