/** @brief Represents a CSS rule consisting of a selector list and a property list. */

#pragma once

#include <string>
#include <string_view>
#include <utility>

#include <aonyx/css/property_list.hpp>
#include <aonyx/css/props/types/property.hpp>

namespace aonyx
{
namespace css
{
/**
 * @brief A CSS rule with a selector list and associated property list.
 */
class rule
{
public:
    /**
     * @brief Construct a rule with a selector list and property list.
     * @param selector_list The CSS selector(s) for this rule.
     * @param plist The property list containing CSS declarations.
     */
    rule(const std::string_view selector_list, property_list plist)
        : selector_list(selector_list), plist(std::move(plist))
    {
    }

    /**
     * @brief Serialize the rule to a CSS string.
     * @return A string in the format "selector { prop: val; ... }".
     */
    std::string to_string() const;

private:
    std::string selector_list;
    property_list plist;
};
} // namespace css
} // namespace aonyx
