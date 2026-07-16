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
                struct text_decoration_skip_ink : types::property_base<"text-decoration-skip-ink">, constants::global_values<text_decoration_skip_ink>
                {
                    using super_property = types::property_base<"text-decoration-skip-ink">;

                    text_decoration_skip_ink() = delete;
                    text_decoration_skip_ink(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant none{key, "none"};
                    inline static constexpr types::property_constant all{key, "all"};
                };
            }
        }
    }
}
