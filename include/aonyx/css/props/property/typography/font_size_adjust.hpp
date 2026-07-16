#pragma once

#include <string>
#include <format>
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
                struct font_size_adjust : types::property_base<"font-size-adjust">, constants::global_values<font_size_adjust>
                {
                    using super_property = types::property_base<"font-size-adjust">;

                    font_size_adjust() = delete;
                    font_size_adjust(util::numerical v) : super_property(v.to_string()) {}
                    font_size_adjust(std::string_view metric, util::numerical v) : super_property(std::format("{} {}", metric, v)) {}

                    inline static constexpr types::property_constant ex_height{key, "ex-height"};
                    inline static constexpr types::property_constant cap_height{key, "cap-height"};
                    inline static constexpr types::property_constant ic_width{key, "ic-width"};
                    inline static constexpr types::property_constant ic_height{key, "ic-height"};
                    inline static constexpr types::property_constant alphabetic{key, "alphabetic"};
                    inline static constexpr types::property_constant numeric{key, "numeric"};
                    inline static constexpr types::property_constant none{key, "none"};
                };
            }
        }
    }
}
