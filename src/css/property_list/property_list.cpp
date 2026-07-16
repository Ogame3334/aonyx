#include <aonyx/css/property_list.hpp>

namespace aonyx
{
    namespace css
    {
        std::string property_list::to_string() const
        {
            std::string res = "";
            for (const auto &[k, v] : properties)
            {
                res += k + ":" + v + ";";
            }

            return res;
        }
    }
}
