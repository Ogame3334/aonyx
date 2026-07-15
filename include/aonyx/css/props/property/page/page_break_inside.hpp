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
                struct page_break_inside : types::property_base<"page-break-inside">, constants::global_values<page_break_inside>
                {
                    using super_property = types::property_base<"page-break-inside">;

                    page_break_inside() = delete;
                    page_break_inside(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view avoid = "avoid";
                };
            }
        }
    }
}
