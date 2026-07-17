/** @brief Defines the html_tag type used to create html_node instances via operator(). */
#pragma once

#include <string>
#include <string_view>
#include <vector>
#include <type_traits>
#include <aonyx/util/concepts.hpp>
#include <aonyx/dom/html_node.hpp>
#include <aonyx/dom/tags.hpp>

namespace aonyx
{
    namespace dom
    {
        /** @brief A named HTML tag that can be invoked to produce html_node instances. */
        struct html_tag
        {
            tags tag;
            std::string tag_name;

            /** @brief Construct from a string tag name. */
            constexpr html_tag(const std::string_view tag_name) : tag(str2tags(tag_name)), tag_name(tag_name)
            {
            }
            /** @brief Construct from a tags enum value. */
            constexpr html_tag(const tags &tag) : tag(tag), tag_name(tags2str(tag))
            {
            }

            /** @brief Create an html_node with the given attributes.
             *  @tparam Attrs attribute types to attach.
             *  @param attrs One or more attributes.
             *  @return A new html_node configured with this tag and attributes. */
            template <class... Attrs>
                requires(util::like<Attrs, attribute> && ...)
            html_node operator()(Attrs &&...attrs) const;

            /** @brief Create an html_node with no attributes or children.
             *  @return A new html_node with only the tag name set. */
            html_node operator()() const;

            /** @brief Create an html_node with the given child nodes.
             *  @tparam Children html_node types to append as children.
             *  @param children One or more child nodes.
             *  @return A new html_node configured with this tag and children. */
            template <class... Children>
                requires(util::like<Children, html_node> && ...)
            html_node operator()(Children &&...children) const;

            /** @brief Create an html_node with text content.
             *  @param text_content The text content to set.
             *  @return A new html_node configured with this tag and text. */
            html_node operator()(const std::string_view text_content) const;
        };
    } // namespace dom
} // namespace aonyx

#include <aonyx/dom/details/html_tag.ipp>
