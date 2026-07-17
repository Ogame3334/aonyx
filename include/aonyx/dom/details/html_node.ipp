/** @brief Template implementation of html_node::operator() for child node insertion. */
#pragma once

#include <aonyx/dom/html_tag.hpp>

namespace aonyx
{
    namespace dom
    {
        /** @brief Appends child nodes using a fold expression over the parameter pack. */
        template <class... Children>
            requires(util::like<Children, html_node> && ...)
        html_node &html_node::operator()(Children &&...child)
        {
            (children.push_back(std::forward<Children>(child)), ...);
            return *this;
        }
    } // namespace dom
} // namespace aonyx
