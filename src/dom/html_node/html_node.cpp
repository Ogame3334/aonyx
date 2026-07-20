/** @brief Implementation of HTML node construction and serialization. */

#include <aonyx/dom.hpp>

#include <aonyx/util/escape.hpp>

namespace aonyx
{
namespace dom
{
namespace
{
/** @brief Check whether a tag name is a void/self-closing HTML element.
 *  @param tag_name The tag name to check.
 *  @return true if the element is void (e.g. br, img, input). */
bool is_void_element(const std::string_view tag_name)
{
    return tag_name == "area" || tag_name == "base" || tag_name == "br" || tag_name == "col" || tag_name == "embed" ||
           tag_name == "hr" || tag_name == "img" || tag_name == "input" || tag_name == "link" || tag_name == "meta" ||
           tag_name == "param" || tag_name == "source" || tag_name == "track" || tag_name == "wbr";
}
} // namespace

/** @brief Set the text content of this node and return itself for chaining.
 *  @param text_content The text to set (will be HTML-escaped).
 *  @return Reference to this html_node. */
html_node& html_node::operator()(const std::string_view text_content)
{
    this->text_content = aonyx::util::escape_html(text_content);
    return *this;
}

/** @brief Serialize the node and its children to an HTML string.
 *  @return The rendered HTML markup. */
std::string html_node::to_string() const
{
    if (this->tag_name.empty())
    {
        std::string result = "";
        if (!this->text_content.empty())
        {
            result += this->text_content;
        }
        for (const auto& child : children)
        {
            result += child.to_string();
        }

        return result;
    }
    std::string result = "";
    if (tag_name == "html")
    {
        result += "<!DOCTYPE html>\n";
    }
    result += "<" + tag_name;
    for (const auto& attr : attributes)
    {
        result += " " + aonyx::util::escape_html(attr.name) + "=\"" + aonyx::util::escape_html(attr.value) + "\"";
    }

    if (is_void_element(tag_name))
    {
        result += " />";
        return result;
    }

    result += ">";
    if (!text_content.empty())
    {
        result += text_content;
    }
    for (const auto& child : children)
    {
        result += child.to_string();
    }
    result += "</" + tag_name + ">";
    return result;
}
} // namespace dom
} // namespace aonyx
