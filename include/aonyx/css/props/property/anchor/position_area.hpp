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
                struct position_area : types::property_base<"position-area">, constants::global_values<position_area>
                {
                    using super_property = types::property_base<"position-area">;

                    position_area() = delete;
                    position_area(std::string_view v) : super_property(std::string(v)) {}
                    position_area(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    position_area(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4) : super_property(std::format("{} {} {} {}", v1, v2, v3, v4)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                    inline static constexpr types::property_constant all{key, "all"};
                    inline static constexpr types::property_constant top{key, "top"};
                    inline static constexpr types::property_constant right{key, "right"};
                    inline static constexpr types::property_constant bottom{key, "bottom"};
                    inline static constexpr types::property_constant left{key, "left"};
                    inline static constexpr types::property_constant center{key, "center"};
                    inline static constexpr types::property_constant span_top{key, "span-top"};
                    inline static constexpr types::property_constant span_right{key, "span-right"};
                    inline static constexpr types::property_constant span_bottom{key, "span-bottom"};
                    inline static constexpr types::property_constant span_left{key, "span-left"};
                    inline static constexpr types::property_constant span_all{key, "span-all"};
                    inline static constexpr types::property_constant x{key, "x"};
                    inline static constexpr types::property_constant y{key, "y"};
                    inline static constexpr types::property_constant span_x{key, "span-x"};
                    inline static constexpr types::property_constant span_y{key, "span-y"};
                    inline static constexpr types::property_constant block{key, "block"};
                    inline static constexpr types::property_constant span_block{key, "span-block"};
                    inline static constexpr types::property_constant inline_{key, "inline"};
                    inline static constexpr types::property_constant span_inline{key, "span-inline"};
                };
            }
        }
    }
}
