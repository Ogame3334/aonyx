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
                struct min_height : types::property_base<"min-height">, constants::global_values<min_height>
                {
                    using super_property = types::property_base<"min-height">;

                    min_height() = delete;
                    min_height(util::numerical h) : super_property(h.to_string()) {}
                    min_height(std::string_view h) : super_property(std::string(h)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant fit_content{key, "fit-content"};
                    inline static constexpr types::property_constant min_content{key, "min-content"};
                    inline static constexpr types::property_constant max_content{key, "max-content"};
                    inline static constexpr types::property_constant available{key, "available"};
                    inline static constexpr types::property_constant stretch{key, "stretch"};
                };
            }
        }
    }
}
