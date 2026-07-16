#include <aonyx/css/stylesheet.hpp>

namespace aonyx
{
    namespace css
    {
        void stylesheet::add(const rule &r)
        {
            rules.push_back(r);
        }

        std::string stylesheet::to_string() const
        {
            std::ostringstream oss;
            for (auto &rule : rules)
            {
                oss << rule.to_string();
            }

            return oss.str();
        }
    }
}
