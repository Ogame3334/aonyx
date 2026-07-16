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
                struct min_block_size : types::property_base<"min-block-size">, constants::global_values<min_block_size>
                {
                    using super_property = types::property_base<"min-block-size">;

                    min_block_size() = delete;
                    min_block_size(util::numerical s) : super_property(s.to_string()) {}
                    min_block_size(std::string_view s) : super_property(std::string(s)) {}

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
