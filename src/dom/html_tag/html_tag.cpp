/** @brief Implementation of html_tag factory methods. */

#include <aonyx/dom/html_tag.hpp>
#include <aonyx/util/escape.hpp>

namespace aonyx
{
    namespace dom
    {

        /** @brief Create an html_node with no text content.
         *  @return A new html_node for the stored tag name. */
        html_node html_tag::operator()() const
        {
            return html_node{tag_name};
        }

        /** @brief Create an html_node with the given text content.
         *  @param text_content The text content (HTML-escaped before storing).
         *  @return A new html_node for the stored tag name. */
        html_node html_tag::operator()(const std::string_view text_content) const
        {
            html_node node{tag_name};
            node.text_content = aonyx::util::escape_html(text_content);
            return node;
        }
    } // namespace aonyx
}
