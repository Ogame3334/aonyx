#pragma once

#include <string>
#include <string_view>

#include <aonyx/css/props/types/property.hpp>
#include <aonyx/css/props/constants/global_values.hpp>

namespace aonyx
{
    namespace css
    {
        namespace props
        {
            namespace property
            {
                struct text_justify : types::property_base<"text-justify">, constants::global_values<text_justify>
                {
                    using super_property = types::property_base<"text-justify">;

                    text_justify() = delete;
                    text_justify(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view inter_word = "inter-word";
                    inline static constexpr std::string_view inter_idograph = "inter-ideograph";
                    inline static constexpr std::string_view inter_cluster = "inter-cluster";
                    inline static constexpr std::string_view distribute = "distribute";
                    inline static constexpr std::string_view kashida = "kashida";
                    inline static constexpr std::string_view trim = "trim";
                };
            }
        }
    }
}
