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
                struct width : types::property_base<"width">, constants::global_values<width>
                {
                    using super_property = types::property_base<"width">;

                    width() = delete;
                    width(util::numerical w) : super_property(w.to_string()) {}
                    width(std::string_view w) : super_property(std::string(w)) {}

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
