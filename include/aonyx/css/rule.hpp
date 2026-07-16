#pragma once

#include <string>
#include <string_view>

#include <aonyx/css/props/types/property.hpp>
#include <aonyx/css/property_list.hpp>

namespace aonyx
{
    namespace css
    {
        class rule
        {
        public:
            rule(const std::string_view selector_list, property_list plist) : selector_list(selector_list), plist(plist) {}

            std::string to_string() const;

        private:
            std::string selector_list;
            property_list plist;
        };
    }
}
