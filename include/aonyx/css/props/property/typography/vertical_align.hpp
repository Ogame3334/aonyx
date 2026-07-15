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
                struct vertical_align : types::property_base<"vertical-align">, constants::global_values<vertical_align>
                {
                    using super_property = types::property_base<"vertical-align">;

                    vertical_align() = delete;
                    vertical_align(util::numerical v) : super_property(v.to_string()) {}
                    vertical_align(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view baseline = "baseline";
                    inline static constexpr std::string_view sub = "sub";
                    inline static constexpr std::string_view super = "super";
                    inline static constexpr std::string_view top = "top";
                    inline static constexpr std::string_view text_top = "text-top";
                    inline static constexpr std::string_view middle = "middle";
                    inline static constexpr std::string_view bottom = "bottom";
                    inline static constexpr std::string_view text_bottom = "text-bottom";
                };
            }
        }
    }
}
