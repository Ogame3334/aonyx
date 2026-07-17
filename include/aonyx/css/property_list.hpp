/** @brief Defines the property_list class and the make_property_list() convenience function. */

#pragma once

#include <string>
#include <string_view>
#include <vector>
#include <utility>
#include <format>

#include <aonyx/css/props/types/property.hpp>

namespace aonyx
{
    namespace css
    {
        /**
         * @brief A list of CSS property-value pairs.
         */
        class property_list
        {
        public:
            /**
             * @brief Add or update a property in the list.
             * @tparam Prop A type satisfying the propertiable concept.
             * @param prop The property to add or update (replaces any existing entry with the same key).
             */
            template <props::concepts::propertiable Prop>
            void add(Prop prop);

            /**
             * @brief Serialize the property list to a CSS string.
             * @return A string in the format "key1: value1; key2: value2;".
             */
            std::string to_string() const;

        private:
            std::vector<std::pair<std::string, std::string>> properties;
        };

        /**
         * @brief Create a property_list from one or more properties.
         * @tparam Props Types satisfying the propertiable concept.
         * @param props The properties to include.
         * @return A property_list containing the given properties.
         */
        template <props::concepts::propertiable... Props>
        property_list make_property_list(Props... props);
    }
}

#include <aonyx/css/details/property_list.ipp>

/** @brief std::formatter specialization for property_list, enabling use with std::format. */
template <>
struct std::formatter<aonyx::css::property_list> : std::formatter<std::string>
{
    auto format(const aonyx::css::property_list &plist, std::format_context &ctx) const
    {
        return std::formatter<std::string>::format(plist.to_string(), ctx);
    }
};
