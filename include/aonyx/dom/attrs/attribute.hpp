/** @brief Defines the attribute type and helper functions for creating common HTML attributes. */
#pragma once

#include <string>
#include <string_view>

#include <aonyx/css/property_list.hpp>

namespace aonyx
{
namespace dom
{
/** @brief A name-value pair representing an HTML attribute. */
struct attribute
{
    std::string name;
    std::string value;
};

/** @brief Helper functions for constructing common HTML attributes. */
namespace attrs
{
/** @brief Create a "class" attribute.
 *  @param value The CSS class name(s).
 *  @return An attribute with name "class". */
inline attribute class_(const std::string_view value)
{
    return attribute{"class", std::string(value)};
}

/** @brief Create an "id" attribute.
 *  @param value The element ID.
 *  @return An attribute with name "id". */
inline attribute id_(const std::string_view value)
{
    return attribute{"id", std::string(value)};
}

/** @brief Create a "style" attribute from a raw string.
 *  @param value The inline CSS string.
 *  @return An attribute with name "style". */
inline attribute style(const std::string_view value)
{
    return attribute{"style", std::string(value)};
}
/** @brief Create a "style" attribute from a property_list.
 *  @param property_list The CSS property list.
 *  @return An attribute with name "style". */
inline attribute style(const css::property_list property_list)
{
    return attribute{"style", property_list.to_string()};
}

/** @brief Create an "href" attribute.
 *  @param value The hyperlink URL.
 *  @return An attribute with name "href". */
inline attribute href(const std::string_view value)
{
    return attribute{"href", std::string(value)};
}

/** @brief Create a "src" attribute.
 *  @param value The source URL.
 *  @return An attribute with name "src". */
inline attribute src(const std::string_view value)
{
    return attribute{"src", std::string(value)};
}

/** @brief Create an "alt" attribute.
 *  @param value The alternative text.
 *  @return An attribute with name "alt". */
inline attribute alt(const std::string_view value)
{
    return attribute{"alt", std::string(value)};
}

/** @brief Create a "title" attribute.
 *  @param value The advisory title.
 *  @return An attribute with name "title". */
inline attribute title(const std::string_view value)
{
    return attribute{"title", std::string(value)};
}

/** @brief Create a "name" attribute.
 *  @param value The element name.
 *  @return An attribute with name "name". */
inline attribute name(const std::string_view value)
{
    return attribute{"name", std::string(value)};
}

/** @brief Create a "value" attribute.
 *  @param value The element value.
 *  @return An attribute with name "value". */
inline attribute value(const std::string_view value)
{
    return attribute{"value", std::string(value)};
}

/** @brief Create a "type" attribute.
 *  @param value The input type.
 *  @return An attribute with name "type". */
inline attribute type(const std::string_view value)
{
    return attribute{"type", std::string(value)};
}

/** @brief Create a "placeholder" attribute.
 *  @param value The placeholder text.
 *  @return An attribute with name "placeholder". */
inline attribute placeholder(const std::string_view value)
{
    return attribute{"placeholder", std::string(value)};
}

/** @brief Create an "action" attribute.
 *  @param value The form action URL.
 *  @return An attribute with name "action". */
inline attribute action(const std::string_view value)
{
    return attribute{"action", std::string(value)};
}

/** @brief Create a "method" attribute.
 *  @param value The HTTP method.
 *  @return An attribute with name "method". */
inline attribute method(const std::string_view value)
{
    return attribute{"method", std::string(value)};
}

/** @brief Create a "rel" attribute.
 *  @param value The relationship value.
 *  @return An attribute with name "rel". */
inline attribute rel(const std::string_view value)
{
    return attribute{"rel", std::string(value)};
}

/** @brief Create a "target" attribute.
 *  @param value The browsing context.
 *  @return An attribute with name "target". */
inline attribute target(const std::string_view value)
{
    return attribute{"target", std::string(value)};
}

/** @brief Create a "charset" attribute.
 *  @param value The character encoding.
 *  @return An attribute with name "charset". */
inline attribute charset(const std::string_view value)
{
    return attribute{"charset", std::string(value)};
}

/** @brief Create a "content" attribute.
 *  @param value The meta content value.
 *  @return An attribute with name "content". */
inline attribute content(const std::string_view value)
{
    return attribute{"content", std::string(value)};
}

/** @brief Create a "lang" attribute.
 *  @param value The language code.
 *  @return An attribute with name "lang". */
inline attribute lang(const std::string_view value)
{
    return attribute{"lang", std::string(value)};
}
} // namespace attrs
} // namespace dom
} // namespace aonyx
