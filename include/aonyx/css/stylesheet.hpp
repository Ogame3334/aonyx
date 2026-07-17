/** @brief Defines the stylesheet class and the make_stylesheet() convenience function. */

#pragma once

#include <sstream>
#include <string_view>
#include <vector>

#include <aonyx/css/rule.hpp>
#include <aonyx/util/concepts.hpp>

namespace aonyx
{
namespace css
{
/**
 * @brief A CSS stylesheet containing an ordered collection of rules.
 */
class stylesheet
{
public:
    /**
     * @brief Append a rule to the stylesheet.
     * @param r The rule to add.
     */
    void add(const rule& r);

    /**
     * @brief Serialize the stylesheet to a CSS string.
     * @return A string containing all rules in order.
     */
    std::string to_string() const;

private:
    std::vector<rule> rules;
};

/**
 * @brief Create a stylesheet from one or more rules.
 * @tparam Ts Rule types (must all satisfy util::like<css::rule>).
 * @param rules The rules to include.
 * @return A stylesheet containing the given rules.
 */
template <typename... Ts>
    requires(util::like<Ts, css::rule> && ...)
stylesheet make_stylesheet(Ts... rules);
} // namespace css
} // namespace aonyx

#include <aonyx/css/details/stylesheet.ipp>
