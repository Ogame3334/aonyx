/** @brief Template implementations of html_tag::operator() for attributes and children. */
#pragma once

#include <aonyx/dom/html_tag.hpp>

namespace aonyx
{
    namespace dom
    {
        /** @brief Creates an html_node with attributes forwarded from the parameter pack.
         *  @tparam Attrs Attribute types.
         *  @param attrs The attribute pack to attach. */
        template <class... Attrs>
            requires(util::like<Attrs, attribute> && ...)
        html_node html_tag::operator()(Attrs &&...attrs) const
        {
            html_node node{tag_name};
            (node.attributes.push_back(std::forward<Attrs>(attrs)), ...);
            return node;
        }

        /** @brief Creates an html_node with children forwarded from the parameter pack.
         *  @tparam Children html_node types.
         *  @param children The child node pack to append. */
        template <class... Children>
            requires(util::like<Children, html_node> && ...)
        html_node html_tag::operator()(Children &&...children) const
        {
            html_node node{tag_name};
            (node.children.push_back(std::forward<Children>(children)), ...);
            return node;
        }
    } // namespace dom
} // namespace aonyx
