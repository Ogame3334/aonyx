/** @brief Defines the html_node type representing a single element in the DOM tree. */
#pragma once

#include <aonyx/dom/attrs/attribute.hpp>
#include <aonyx/util/concepts.hpp>
#include <string>
#include <string_view>
#include <type_traits>
#include <vector>

namespace aonyx
{
namespace dom
{
/** @brief Represents a single DOM element node.
 *  Contains a tag name, attributes, child nodes, and optional text content. */
struct html_node
{
    std::string tag_name;
    std::vector<attribute> attributes;
    std::vector<html_node> children;
    std::string text_content;

    /** @brief Construct a node with a given tag name. */
    constexpr html_node(const std::string_view tag_name) : tag_name(tag_name)
    {
    }

    /** @brief Add child nodes to this element.
     *  @tparam Children html_node types to append as children.
     *  @param child  One or more child nodes.
     *  @return Reference to this node for chaining. */
    template <class... Children>
        requires(util::like<Children, html_node> && ...)
    html_node& operator()(Children&&... child);

    /** @brief Set the text content of this element.
     *  @param text_content The text to insert.
     *  @return Reference to this node for chaining. */
    html_node& operator()(const std::string_view text_content);

    /** @brief Serialize this node and its children to an HTML string.
     *  @return The HTML string representation. */
    std::string to_string() const;
};
} // namespace dom
} // namespace aonyx

#include <aonyx/dom/details/html_node.ipp>
