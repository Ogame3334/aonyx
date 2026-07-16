#include <aonyx/css/rule.hpp>

#include <format>

namespace aonyx
{
    namespace css
    {
        std::string rule::to_string() const
        {
            return std::format("{} {{ {} }}", selector_list, plist);
        }
    }
}
