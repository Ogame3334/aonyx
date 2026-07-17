/** @brief Type-specific string-to-parameter conversion functions. */
#pragma once

#include <string>
#include <string_view>
#include <charconv>
#include <stdexcept>

namespace aonyx
{
    namespace util
    {
        /** @brief Primary template (deleted). Converts a string_view to type T.
         *  @tparam T The target type.
         *  @param s The string to parse.
         *  @return The parsed value.
         *  @throws std::invalid_argument if parsing fails. */
        template <class T>
        inline T param_from_string(std::string_view) = delete;

        /** @brief Specialization for int. Parses a decimal integer. */
        template <>
        inline int param_from_string<int>(std::string_view s)
        {
            int result = 0;
            auto [ptr, ec] = std::from_chars(s.data(), s.data() + s.size(), result);
            if (ec != std::errc{})
            {
                throw std::invalid_argument("invalid integer parameter: " + std::string(s));
            }
            return result;
        }

        /** @brief Specialization for bool. Accepts "true"/"1" -> true; everything else -> false. */
        template <>
        inline bool param_from_string<bool>(std::string_view s)
        {
            if (s == "true" || s == "1")
                return true;
            else
                return false;
        }

        /** @brief Specialization for std::string. Returns a copy of the input view. */
        template <>
        inline std::string param_from_string<std::string>(std::string_view s)
        {
            return std::string(s);
        }
    }
}
