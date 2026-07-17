/** @brief Implementation of CSS stylesheet management. */

#include <aonyx/css/stylesheet.hpp>

namespace aonyx
{
namespace css
{
/** @brief Append a CSS rule to the stylesheet.
 *  @param r The rule to add. */
void stylesheet::add(const rule& r)
{
    rules.push_back(r);
}

/** @brief Serialize the full stylesheet to a string.
 *  @return Concatenated string of all CSS rules. */
std::string stylesheet::to_string() const
{
    std::ostringstream oss;
    for (auto& rule : rules)
    {
        oss << rule.to_string();
    }

    return oss.str();
}
} // namespace css
} // namespace aonyx
