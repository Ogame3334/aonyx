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
                struct page_break_after : types::property_base<"page-break-after">, constants::global_values<page_break_after>
                {
                    using super_property = types::property_base<"page-break-after">;

                    page_break_after() = delete;
                    page_break_after(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view always = "always";
                    inline static constexpr std::string_view avoid = "avoid";
                    inline static constexpr std::string_view left = "left";
                    inline static constexpr std::string_view right = "right";
                    inline static constexpr std::string_view recto = "recto";
                    inline static constexpr std::string_view verso = "verso";
                };
            }
        }
    }
}
