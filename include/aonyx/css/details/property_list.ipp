#pragma once

#include <aonyx/css/property_list.hpp>
#include <algorithm>

namespace aonyx
{
    namespace css
    {
        template <props::concepts::propertiable Prop>
        void property_list::add(Prop prop)
        {
            auto key = std::string(prop.key);
            auto value = std::string(prop.value);
            auto it = std::find_if(properties.begin(), properties.end(),
                                   [&key](const auto &p) { return p.first == key; });
            if (it != properties.end())
            {
                it->second = value;
            }
            else
            {
                properties.push_back({key, value});
            }
        }

        template <props::concepts::propertiable... Props>
        property_list make_property_list(Props... props)
        {
            property_list result{};

            (result.add(props), ...);

            return result;
        }
    }
}
