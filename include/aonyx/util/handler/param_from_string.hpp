#pragma once

#include <string>
#include <string_view>
#include <charconv>
#include <stdexcept>

namespace aonyx
{
    namespace util
    {
        template <class T>
        inline T param_from_string(std::string_view) = delete;

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

        template <>
        inline bool param_from_string<bool>(std::string_view s)
        {
            if (s == "true" || s == "1")
                return true;
            else
                return false;
        }

        template <>
        inline std::string param_from_string<std::string>(std::string_view s)
        {
            return std::string(s);
        }
    }
}
