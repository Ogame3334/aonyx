/** @brief User-defined literals for CSS-like numerical values with units. */
#pragma once

#include <aonyx/util/numerical.hpp>

namespace aonyx
{
    namespace util
    {
        namespace literal
        {
            /** @brief Literal suffix for pixel values (integral). */
            numerical operator""_px(unsigned long long int n)
            {
                return numerical{n, "px"};
            }
            /** @brief Literal suffix for pixel values (floating-point). */
            numerical operator""_px(long double a)
            {
                return numerical{a, "px"};
            }
            /** @brief Literal suffix for rem values (integral). */
            numerical operator""_rem(unsigned long long int n)
            {
                return numerical{n, "rem"};
            }
            /** @brief Literal suffix for rem values (floating-point). */
            numerical operator""_rem(long double a)
            {
                return numerical{a, "rem"};
            }
            /** @brief Literal suffix for em values (integral). */
            numerical operator""_em(unsigned long long int n)
            {
                return numerical{n, "em"};
            }
            /** @brief Literal suffix for em values (floating-point). */
            numerical operator""_em(long double a)
            {
                return numerical{a, "em"};
            }
            /** @brief Literal suffix for percent values (integral). */
            numerical operator""_per(unsigned long long int n)
            {
                return numerical{n, "%"};
            }
            /** @brief Literal suffix for percent values (floating-point). */
            numerical operator""_per(long double a)
            {
                return numerical{a, "%"};
            }
        }
    }
}
