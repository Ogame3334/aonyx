#pragma once

#include <string>
#include <string_view>
#include <unordered_map>

#include <aonyx/css/props/types/property.hpp>

namespace aonyx
{
    namespace css
    {
        class rule
        {
        public:
            template <props::concepts::propertiable Prop>
            void add(Prop prop)
            {
                properties[std::string(prop.key)] = std::string(prop.value);
            }

            std::string to_string() const
            {
                std::string res = "{";
                for (const auto &[k, v] : properties)
                {
                    res += k + ":" + v + ";";
                }
                res += "}";

                return res;
            }

        private:
            std::unordered_map<std::string, std::string> properties;
        };

        template <props::concepts::propertiable... Props>
        rule make_rule(Props... props)
        {
            rule result{};

            (result.add(props), ...);

            return result;
        }
    }
}
