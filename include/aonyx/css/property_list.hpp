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
        class property_list
        {
        public:
            template <props::concepts::propertiable Prop>
            void add(Prop prop);

            std::string to_string() const;

        private:
            std::vector<std::pair<std::string, std::string>> properties;
        };

        template <props::concepts::propertiable... Props>
        property_list make_property_list(Props... props);
    }
}

#include <aonyx/css/details/property_list.ipp>

template <>
struct std::formatter<aonyx::css::property_list> : std::formatter<std::string>
{
    auto format(const aonyx::css::property_list &plist, std::format_context &ctx) const
    {
        return std::formatter<std::string>::format(plist.to_string(), ctx);
    }
};
