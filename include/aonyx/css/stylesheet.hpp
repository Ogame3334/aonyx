#pragma once

#include <string_view>
#include <vector>
#include <sstream>

#include <aonyx/css/rule.hpp>
#include <aonyx/util/concepts.hpp>

namespace aonyx
{
    namespace css
    {
        class stylesheet
        {
        public:
            void add(const rule &r);

            std::string to_string() const;

        private:
            std::vector<rule> rules;
        };

        template <typename... Ts>
            requires(util::like<Ts, css::rule> && ...)
        stylesheet make_stylesheet(Ts... rules);
    }
}

#include <aonyx/css/details/stylesheet.ipp>
