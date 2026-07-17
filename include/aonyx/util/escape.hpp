/** @brief HTML string escaping utilities. */
#pragma once

#include <string>
#include <string_view>

namespace aonyx
{
namespace util
{
/** @brief Escape special HTML characters (&, ", ', <, >) with their entity equivalents.
 *  @param data The input string view to escape.
 *  @return A new string with HTML entities substituted. */
inline std::string escape_html(std::string_view data)
{
    std::string buffer;
    buffer.reserve(data.size());
    for (size_t pos = 0; pos != data.size(); ++pos)
    {
        switch (data[pos])
        {
            case '&':
                buffer.append("&amp;");
                break;
            case '\"':
                buffer.append("&quot;");
                break;
            case '\'':
                buffer.append("&apos;");
                break;
            case '<':
                buffer.append("&lt;");
                break;
            case '>':
                buffer.append("&gt;");
                break;
            default:
                buffer.append(&data[pos], 1);
                break;
        }
    }

    return buffer;
}
} // namespace util
} // namespace aonyx
