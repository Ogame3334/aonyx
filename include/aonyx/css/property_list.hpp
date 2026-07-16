#pragma once

#include <string>
#include <string_view>
#include <unordered_map>
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
            std::unordered_map<std::string, std::string> properties;
        };

        template <props::concepts::propertiable... Props>
        property_list make_property_list(Props... props);
    }
}

#include <aonyx/css/details/property_list.ipp>

template <>
struct std::formatter<aonyx::css::property_list> : std::formatter<const char *>
{
    auto format(aonyx::css::property_list plist, std::format_context &ctx) const
    {
        return std::formatter<const char *>::format(plist.to_string().c_str(), ctx);
    }
};
