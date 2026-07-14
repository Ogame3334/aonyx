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
            numerical(int n)
            {
                data = std::to_string(n);
            }
            numerical(double a)
            {
                data = std::to_string(a);
            }
            numerical(unsigned long long int n, const std::string_view suffix)
            {
                data = std::format("{}{}", n, suffix);
            }
            numerical(long double a, const std::string_view suffix)
            {
                data = std::format("{}{}", a, suffix);
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

            std::string to_string() const noexcept
            {
                return data;
            }

        private:
            std::string data;
        };
    }
}
