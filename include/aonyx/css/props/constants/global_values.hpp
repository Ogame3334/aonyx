#pragma once

#include <aonyx/css/props/types/property.hpp>

namespace aonyx
{
    namespace css
    {
        namespace props
        {
            namespace constants
            {
                template <typename T>
                struct global_values
                {
                    inline static constexpr property_constant inherit = {T::key, "inherit"};
                    inline static constexpr property_constant initial = {T::key, "initial"};
                    inline static constexpr property_constant revert = {T::key, "revert"};
                    inline static constexpr property_constant revert_layer = {T::key, "revert-layer"};
                    inline static constexpr property_constant unset = {T::key, "unset"};
                };
            }
        }
    }
}
