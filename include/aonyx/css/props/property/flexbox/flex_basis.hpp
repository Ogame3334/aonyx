#pragma once

#include <string>
#include <string_view>

#include <aonyx/css/props/types/property.hpp>
#include <aonyx/css/props/constants/global_values.hpp>
#include <aonyx/util/numerical.hpp>

namespace aonyx
{
    namespace css
    {
        namespace props
        {
            namespace property
            {
                struct flex_basis : types::property_base<"flex-basis">, constants::global_values<flex_basis>
                {
                    using super_property = types::property_base<"flex-basis">;

                    flex_basis() = delete;
                    flex_basis(util::numerical v) : super_property(v.to_string()) {}
                    flex_basis(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view fit_content = "fit-content";
                    inline static constexpr std::string_view max_content = "max-content";
                    inline static constexpr std::string_view min_content = "min-content";
                };
            }
        }
    }
}
