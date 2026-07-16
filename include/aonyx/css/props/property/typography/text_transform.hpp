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
                struct text_transform : types::property_base<"text-transform">, constants::global_values<text_transform>
                {
                    using super_property = types::property_base<"text-transform">;

                    text_transform() = delete;
                    text_transform(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                    inline static constexpr types::property_constant capitalize{key, "capitalize"};
                    inline static constexpr types::property_constant uppercase{key, "uppercase"};
                    inline static constexpr types::property_constant lowercase{key, "lowercase"};
                    inline static constexpr types::property_constant full_width{key, "full-width"};
                    inline static constexpr types::property_constant full_size_kana{key, "full-size-kana"};
                };
            }
        }
    }
}
