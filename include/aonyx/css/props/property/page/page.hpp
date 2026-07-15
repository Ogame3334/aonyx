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
                struct page : types::property_base<"page">, constants::global_values<page>
                {
                    using super_property = types::property_base<"page">;

                    page() = delete;
                    page(std::string_view v) : super_property(std::string(v)) {}
                    page(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view landscape = "landscape";
                    inline static constexpr std::string_view portrait = "portrait";
                };
            }
        }
    }
}
