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
                struct reading_flow : types::property_base<"reading-flow">, constants::global_values<reading_flow>
                {
                    using super_property = types::property_base<"reading-flow">;

                    reading_flow() = delete;
                    reading_flow(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view normal = "normal";
                    inline static constexpr std::string_view grid_rows = "grid-rows";
                    inline static constexpr std::string_view grid_columns = "grid-columns";
                    inline static constexpr std::string_view flow_columns = "flow-columns";
                    inline static constexpr std::string_view flow_root = "flow-root";
                    inline static constexpr std::string_view flex_visual = "flex-visual";
                    inline static constexpr std::string_view flex_flow = "flex-flow";
                };
            }
        }
    }
}
