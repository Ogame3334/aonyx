/** @brief Predefined inline constexpr html_tag constants for all standard HTML elements. */
#pragma once

#include <string>
#include <string_view>
#include <vector>
#include <type_traits>

#include <aonyx/dom/html_tag.hpp>
#include <aonyx/dom/tags.hpp>

namespace aonyx
{
    namespace dom
    {
        // Document metadata
        /** @brief <html> */
        inline constexpr html_tag html{tags::HTML};
        /** @brief <head> */
        inline constexpr html_tag head{tags::HEAD};
        /** @brief <title> */
        inline constexpr html_tag title{tags::TITLE};
        /** @brief <base> */
        inline constexpr html_tag base{tags::BASE};
        /** @brief <link> */
        inline constexpr html_tag link{tags::LINK};
        /** @brief <meta> */
        inline constexpr html_tag meta{tags::META};
        /** @brief <style> */
        inline constexpr html_tag style{tags::STYLE};

        // Sections
        /** @brief <body> */
        inline constexpr html_tag body{tags::BODY};
        /** @brief <article> */
        inline constexpr html_tag article{tags::ARTICLE};
        /** @brief <section> */
        inline constexpr html_tag section{tags::SECTION};
        /** @brief <nav> */
        inline constexpr html_tag nav{tags::NAV};
        /** @brief <aside> */
        inline constexpr html_tag aside{tags::ASIDE};
        /** @brief <h1> */
        inline constexpr html_tag h1{tags::H1};
        /** @brief <h2> */
        inline constexpr html_tag h2{tags::H2};
        /** @brief <h3> */
        inline constexpr html_tag h3{tags::H3};
        /** @brief <h4> */
        inline constexpr html_tag h4{tags::H4};
        /** @brief <h5> */
        inline constexpr html_tag h5{tags::H5};
        /** @brief <h6> */
        inline constexpr html_tag h6{tags::H6};
        /** @brief <header> */
        inline constexpr html_tag header{tags::HEADER};
        /** @brief <footer> */
        inline constexpr html_tag footer{tags::FOOTER};
        /** @brief <address> */
        inline constexpr html_tag address{tags::ADDRESS};

        // Grouping content
        /** @brief <p> */
        inline constexpr html_tag p{tags::P};
        /** @brief <hr> */
        inline constexpr html_tag hr{tags::HR};
        /** @brief <pre> */
        inline constexpr html_tag pre{tags::PRE};
        /** @brief <blockquote> */
        inline constexpr html_tag blockquote{tags::BLOCKQUOTE};
        /** @brief <ol> */
        inline constexpr html_tag ol{tags::OL};
        /** @brief <ul> */
        inline constexpr html_tag ul{tags::UL};
        /** @brief <menu> */
        inline constexpr html_tag menu{tags::MENU};
        /** @brief <li> */
        inline constexpr html_tag li{tags::LI};
        /** @brief <dl> */
        inline constexpr html_tag dl{tags::DL};
        /** @brief <dt> */
        inline constexpr html_tag dt{tags::DT};
        /** @brief <dd> */
        inline constexpr html_tag dd{tags::DD};
        /** @brief <figure> */
        inline constexpr html_tag figure{tags::FIGURE};
        /** @brief <figcaption> */
        inline constexpr html_tag figcaption{tags::FIGCAPTION};
        /** @brief <main> */
        inline constexpr html_tag main_{tags::MAIN};
        /** @brief <div> */
        inline constexpr html_tag div_{tags::DIV};

        // Text-level semantics
        /** @brief <a> */
        inline constexpr html_tag a{tags::A};
        /** @brief <em> */
        inline constexpr html_tag em{tags::EM};
        /** @brief <strong> */
        inline constexpr html_tag strong{tags::STRONG};
        /** @brief <small> */
        inline constexpr html_tag small{tags::SMALL};
        /** @brief <s> */
        inline constexpr html_tag s{tags::S};
        /** @brief <cite> */
        inline constexpr html_tag cite{tags::CITE};
        /** @brief <q> */
        inline constexpr html_tag q{tags::Q};
        /** @brief <dfn> */
        inline constexpr html_tag dfn{tags::DFN};
        /** @brief <abbr> */
        inline constexpr html_tag abbr{tags::ABBR};
        /** @brief <data> */
        inline constexpr html_tag data{tags::DATA};
        /** @brief <time> */
        inline constexpr html_tag time{tags::TIME};
        /** @brief <code> */
        inline constexpr html_tag code{tags::CODE};
        /** @brief <var> */
        inline constexpr html_tag var{tags::VAR};
        /** @brief <samp> */
        inline constexpr html_tag samp{tags::SAMP};
        /** @brief <kbd> */
        inline constexpr html_tag kbd{tags::KBD};
        /** @brief <sub> */
        inline constexpr html_tag sub{tags::SUB};
        /** @brief <sup> */
        inline constexpr html_tag sup{tags::SUP};
        /** @brief <i> */
        inline constexpr html_tag i{tags::I};
        /** @brief <b> */
        inline constexpr html_tag b{tags::B};
        /** @brief <u> */
        inline constexpr html_tag u{tags::U};
        /** @brief <mark> */
        inline constexpr html_tag mark{tags::MARK};
        /** @brief <ruby> */
        inline constexpr html_tag ruby{tags::RUBY};
        /** @brief <rt> */
        inline constexpr html_tag rt{tags::RT};
        /** @brief <rp> */
        inline constexpr html_tag rp{tags::RP};
        /** @brief <bdi> */
        inline constexpr html_tag bdi{tags::BDI};
        /** @brief <bdo> */
        inline constexpr html_tag bdo{tags::BDO};
        /** @brief <span> */
        inline constexpr html_tag span{tags::SPAN};
        /** @brief <br> */
        inline constexpr html_tag br{tags::BR};
        /** @brief <wbr> */
        inline constexpr html_tag wbr{tags::WBR};

        // Edits
        /** @brief <ins> */
        inline constexpr html_tag ins{tags::INS};
        /** @brief <del> */
        inline constexpr html_tag del{tags::DEL};

        // Embedded content
        /** @brief <picture> */
        inline constexpr html_tag picture{tags::PICTURE};
        /** @brief <source> */
        inline constexpr html_tag source{tags::SOURCE};
        /** @brief <img> */
        inline constexpr html_tag img{tags::IMG};
        /** @brief <iframe> */
        inline constexpr html_tag iframe{tags::IFRAME};
        /** @brief <embed> */
        inline constexpr html_tag embed{tags::EMBED};
        /** @brief <object> */
        inline constexpr html_tag object{tags::OBJECT};
        /** @brief <param> */
        inline constexpr html_tag param{tags::PARAM};
        /** @brief <video> */
        inline constexpr html_tag video{tags::VIDEO};
        /** @brief <audio> */
        inline constexpr html_tag audio{tags::AUDIO};
        /** @brief <track> */
        inline constexpr html_tag track{tags::TRACK};
        /** @brief <map> */
        inline constexpr html_tag map{tags::MAP};
        /** @brief <area> */
        inline constexpr html_tag area{tags::AREA};

        // SVG / MathML roots
        /** @brief <svg> */
        inline constexpr html_tag svg{tags::SVG};
        /** @brief <math> */
        inline constexpr html_tag math{tags::MATH};

        // Scripting
        /** @brief <script> */
        inline constexpr html_tag script{tags::SCRIPT};
        /** @brief <noscript> */
        inline constexpr html_tag noscript{tags::NOSCRIPT};
        /** @brief <canvas> */
        inline constexpr html_tag canvas{tags::CANVAS};

        // Templates
        /** @brief <template> */
        inline constexpr html_tag template_{tags::TEMPLATE};
        /** @brief <slot> */
        inline constexpr html_tag slot{tags::SLOT};

        // Tables
        /** @brief <table> */
        inline constexpr html_tag table{tags::TABLE};
        /** @brief <caption> */
        inline constexpr html_tag caption{tags::CAPTION};
        /** @brief <colgroup> */
        inline constexpr html_tag colgroup{tags::COLGROUP};
        /** @brief <col> */
        inline constexpr html_tag col{tags::COL};
        /** @brief <thead> */
        inline constexpr html_tag thead{tags::THEAD};
        /** @brief <tbody> */
        inline constexpr html_tag tbody{tags::TBODY};
        /** @brief <tfoot> */
        inline constexpr html_tag tfoot{tags::TFOOT};
        /** @brief <tr> */
        inline constexpr html_tag tr{tags::TR};
        /** @brief <td> */
        inline constexpr html_tag td{tags::TD};
        /** @brief <th> */
        inline constexpr html_tag th{tags::TH};

        // Forms
        /** @brief <form> */
        inline constexpr html_tag form{tags::FORM};
        /** @brief <label> */
        inline constexpr html_tag label{tags::LABEL};
        /** @brief <input> */
        inline constexpr html_tag input{tags::INPUT};
        /** @brief <button> */
        inline constexpr html_tag button{tags::BUTTON};
        /** @brief <select> */
        inline constexpr html_tag select{tags::SELECT};
        /** @brief <datalist> */
        inline constexpr html_tag datalist{tags::DATALIST};
        /** @brief <optgroup> */
        inline constexpr html_tag optgroup{tags::OPTGROUP};
        /** @brief <option> */
        inline constexpr html_tag option{tags::OPTION};
        /** @brief <textarea> */
        inline constexpr html_tag textarea{tags::TEXTAREA};
        /** @brief <output> */
        inline constexpr html_tag output{tags::OUTPUT};
        /** @brief <progress> */
        inline constexpr html_tag progress{tags::PROGRESS};
        /** @brief <meter> */
        inline constexpr html_tag meter{tags::METER};
        /** @brief <fieldset> */
        inline constexpr html_tag fieldset{tags::FIELDSET};
        /** @brief <legend> */
        inline constexpr html_tag legend{tags::LEGEND};

        // Interactive elements
        /** @brief <details> */
        inline constexpr html_tag details{tags::DETAILS};
        /** @brief <summary> */
        inline constexpr html_tag summary{tags::SUMMARY};
        /** @brief <dialog> */
        inline constexpr html_tag dialog{tags::DIALOG};

        // Web Components
        /** @brief <slot> (explicit slot element) */
        inline constexpr html_tag slot_element{tags::SLOT_ELEMENT};

        /** @brief Document fragment (no tag output). */
        inline constexpr html_tag fragment{tags::NONE};
    } // namespace dom
} // namespace aonyx
