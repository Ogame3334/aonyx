#pragma once

#include "../numerical.hpp"

namespace aonyx
{
    namespace util
    {
        namespace literal
        {
            numerical operator""_px(unsigned long long int n)
            {
                return numerical{n, "px"};
            }
            numerical operator""_px(long double a)
            {
                return numerical{a, "px"};
            }
            numerical operator""_rem(unsigned long long int n)
            {
                return numerical{n, "rem"};
            }
            numerical operator""_rem(long double a)
            {
                return numerical{a, "rem"};
            }
            numerical operator""_em(unsigned long long int n)
            {
                return numerical{n, "em"};
            }
            numerical operator""_em(long double a)
            {
                return numerical{a, "em"};
            }
            numerical operator""_per(unsigned long long int n)
            {
                return numerical{n, "%"};
            }
            numerical operator""_pcnt(long double a)
            {
                return numerical{a, "%"};
            }
        }
    }
}
