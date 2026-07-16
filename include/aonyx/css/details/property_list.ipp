#pragma once

#include <aonyx/css/property_list.hpp>

namespace aonyx
{
    namespace css
    {
        template <props::concepts::propertiable Prop>
        void property_list::add(Prop prop)
        {
            properties[std::string(prop.key)] = std::string(prop.value);
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
