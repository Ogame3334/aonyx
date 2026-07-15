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
            constexpr numerical(int n) : data(std::to_string(n))
            {
            }
            constexpr numerical(double a) : data(std::to_string(a))
            {
            }
            constexpr numerical(unsigned long long int n, const std::string_view suffix) : data(std::format("{}{}", n, suffix))
            {
            }
            constexpr numerical(long double a, const std::string_view suffix) : data(std::format("{}{}", a, suffix))
            {
            }

            numerical &operator+(numerical other)
            {
                data = std::format("{} + {}", data, other.data);

                return *this;
            }
            numerical &operator-(numerical other)
            {
                data = std::format("{} - {}", data, other.data);

                return *this;
            }

            constexpr std::string to_string() const noexcept
            {
                return data;
            }

        private:
            std::string data;
        };
    }
}

template <>
struct std::formatter<aonyx::util::numerical> : std::formatter<const char *>
{
    auto format(aonyx::util::numerical n, std::format_context &ctx) const
    {
        return std::formatter<const char *>::format(n.to_string().c_str(), ctx);
    }
};
