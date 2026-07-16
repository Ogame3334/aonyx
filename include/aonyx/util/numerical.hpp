#pragma once

#include <format>
#include <string>
#include <string_view>

namespace aonyx
{
    namespace util
    {
        class numerical
        {
        public:
            numerical() = default;
            constexpr numerical(const numerical &n) = default;
            constexpr numerical(numerical &&n) = default;
            constexpr numerical(int n) : data(std::to_string(n)) {}
            constexpr numerical(double a) : data(std::to_string(a)) {}
            constexpr numerical(unsigned long long int n, const std::string_view suffix) : data(std::format("{}{}", n, suffix)) {}
            constexpr numerical(long double a, const std::string_view suffix) : data(std::format("{}{}", a, suffix)) {}

            numerical operator+(numerical other) const
            {
                return numerical{std::format("{} + {}", data, other.data)};
            }
            numerical operator-(numerical other) const
            {
                return numerical{std::format("{} - {}", data, other.data)};
            }
            numerical operator+() const
            {
                return numerical{data};
            }
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

            constexpr std::string to_string() const noexcept
            {
                return data;
            }

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
