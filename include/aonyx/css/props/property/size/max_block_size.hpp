/** @brief CSS property: max-block-size
 *
 * max-block-size CSS property.
 */
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
                struct max_block_size : types::property_base<"max-block-size">, constants::global_values<max_block_size>
                {
                    using super_property = types::property_base<"max-block-size">;

                    max_block_size() = delete;
                    max_block_size(util::numerical s) : super_property(s.to_string()) {}
                    max_block_size(std::string_view s) : super_property(std::string(s)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant fit_content{key, "fit-content"};
                    inline static constexpr types::property_constant min_content{key, "min-content"};
                    inline static constexpr types::property_constant max_content{key, "max-content"};
                    inline static constexpr types::property_constant available{key, "available"};
                    inline static constexpr types::property_constant stretch{key, "stretch"};
                    inline static constexpr types::property_constant none{key, "none"};
                };
            }
        }
    }
}
