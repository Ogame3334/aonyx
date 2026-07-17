/** @brief String-based numerical representation supporting arithmetic expressions and CSS-like unit suffixes. */
#pragma once

#include <format>
#include <string>
#include <string_view>

namespace aonyx
{
    namespace util
    {
        /** @brief Represents a numerical value as a string, supporting arithmetic expressions and unit suffixes. */
        class numerical
        {
        public:
            numerical() = default;
            constexpr numerical(const numerical &n) = default;
            constexpr numerical(numerical &&n) = default;
            /** @brief Construct from an int. */
            constexpr numerical(int n) : data(std::to_string(n)) {}
            /** @brief Construct from a double. */
            constexpr numerical(double a) : data(std::to_string(a)) {}
            /** @brief Construct from an unsigned long long with a unit suffix (e.g. "px", "rem"). */
            constexpr numerical(unsigned long long int n, const std::string_view suffix) : data(std::format("{}{}", n, suffix)) {}
            /** @brief Construct from a long double with a unit suffix. */
            constexpr numerical(long double a, const std::string_view suffix) : data(std::format("{}{}", a, suffix)) {}

            /** @brief Add two numerical values, producing an expression string. */
            numerical operator+(numerical other) const
            {
                return numerical{std::format("{} + {}", data, other.data)};
            }
            /** @brief Subtract two numerical values, producing an expression string. */
            numerical operator-(numerical other) const
            {
                return numerical{std::format("{} - {}", data, other.data)};
            }
            /** @brief Unary plus (identity). */
            numerical operator+() const
            {
                return numerical{data};
            }
            /** @brief Unary minus (negation). */
            numerical operator-() const
            {
                if (data.empty())
                {
                    return numerical{data};
                }
                if (!data.starts_with('-'))
                {
                    numerical temp{'-' + data};
                    return temp;
                }
                else
                {
                    numerical temp{data.substr(1)};
                    return temp;
                }
            }

            /** @brief Return the underlying string representation. */
            constexpr std::string to_string() const noexcept
            {
                return data;
            }

            /** @brief Check whether the value is positive (does not start with '-'). */
            bool is_positive() const noexcept
            {
                return !data.starts_with('-');
            }

        private:
            std::string data;

            constexpr numerical(const std::string_view d) : data(d) {}
        };
    }
}

template <>
struct std::formatter<aonyx::util::numerical> : std::formatter<std::string>
{
    auto format(const aonyx::util::numerical &n, std::format_context &ctx) const
    {
        return std::formatter<std::string>::format(n.to_string(), ctx);
    }
};
