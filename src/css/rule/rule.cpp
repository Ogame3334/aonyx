/** @brief Implementation of CSS rule serialization. */

#include <aonyx/css/rule.hpp>

#include <format>

namespace aonyx
{
namespace css
{
/** @brief Serialize the rule to a CSS string.
 *  @return A string like "selector { color:red; }". */
std::string rule::to_string() const
{
    return std::format("{} {{ {} }}", selector_list, plist);
}
} // namespace css
} // namespace aonyx
