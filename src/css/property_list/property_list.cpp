/** @brief Implementation of property_list serialization. */

#include <aonyx/css/property_list.hpp>

namespace aonyx
{
    namespace css
    {
        /** @brief Serialize the property list to a CSS declaration string.
         *  @return A string like "color:red;font-size:14px;". */
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
