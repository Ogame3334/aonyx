#pragma once

#include <string>
#include <string_view>
#include <format>

namespace aonyx
{
    namespace css
    {
        namespace props
        {
            namespace func
            {
                std::string linear_gradient(std::string_view direction, std::string_view stops)
                {
                    return std::format("linear-gradient({}, {})", direction, stops);
                }

                std::string linear_gradient(std::string_view stops)
                {
                    return std::format("linear-gradient({})", stops);
                }

                std::string radial_gradient(std::string_view shape, std::string_view stops)
                {
                    return std::format("radial-gradient({}, {})", shape, stops);
                }

                std::string radial_gradient(std::string_view stops)
                {
                    return std::format("radial-gradient({})", stops);
                }

                std::string conic_gradient(std::string_view direction, std::string_view stops)
                {
                    return std::format("conic-gradient({}, {})", direction, stops);
                }

                std::string conic_gradient(std::string_view stops)
                {
                    return std::format("conic-gradient({})", stops);
                }

                std::string repeating_linear_gradient(std::string_view direction, std::string_view stops)
                {
                    return std::format("repeating-linear-gradient({}, {})", direction, stops);
                }

                std::string repeating_linear_gradient(std::string_view stops)
                {
                    return std::format("repeating-linear-gradient({})", stops);
                }

                std::string repeating_radial_gradient(std::string_view shape, std::string_view stops)
                {
                    return std::format("repeating-radial-gradient({}, {})", shape, stops);
                }

                std::string repeating_radial_gradient(std::string_view stops)
                {
                    return std::format("repeating-radial-gradient({})", stops);
                }

                std::string repeating_conic_gradient(std::string_view direction, std::string_view stops)
                {
                    return std::format("repeating-conic-gradient({}, {})", direction, stops);
                }

                std::string repeating_conic_gradient(std::string_view stops)
                {
                    return std::format("repeating-conic-gradient({})", stops);
                }
            }
        }
    }
}
