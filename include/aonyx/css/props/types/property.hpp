#pragma once

#include <string>
#include <string_view>
#include <concepts>

#include <aonyx/util/static_string.hpp>
#include <aonyx/util/concepts.hpp>

namespace aonyx
{
    namespace css
    {
        namespace props
        {
            namespace types
            {
                template <util::static_string Key>
                struct property_base
                {
                    static constexpr const char *key = Key.data;
                    std::string value;
                };

                struct property_constant
                {
                    const char *key;
                    std::string_view value;
                };
            }
            namespace concepts
            {
                template <typename T>
                concept propertiable = requires(T t) {
                    { t.key } -> util::like<const char *>;
                    { t.value } -> util::like<std::conditional_t<std::is_same_v<T, props::types::property_constant>, std::string_view, std::string>>;
                };
            }
        }
    }
}
