#pragma once

#include <cstdlib>

namespace aonyx
{
    namespace util
    {
        template <std::size_t N>
        struct static_string
        {
            consteval static_string(const char (&lhs)[N + 1])
            {
                for (std::size_t i = 0; i < N + 1; i++)
                {
                    this->data[i] = lhs[i];
                }
                this->data[N] = '\0';
            };
            char data[N + 1] = {};
        };
        template <std::size_t N>
        static_string(const char (&)[N]) -> static_string<N - 1>;
    }
}
