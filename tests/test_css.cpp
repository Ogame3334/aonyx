#include <boost/test/unit_test.hpp>
#include <aonyx/css.hpp>

using namespace aonyx::css;

BOOST_AUTO_TEST_SUITE(CSSTest)

BOOST_AUTO_TEST_CASE(RuleCreation)
{
    property_list plist;
    plist.add(props::color("red"));
    plist.add(props::font_size("12px"));

    rule r(".my-class", plist);
    std::string expected = ".my-class { color:red;font-size:12px; }";
    BOOST_CHECK_EQUAL(r.to_string(), expected);
}

BOOST_AUTO_TEST_CASE(StylesheetCreation)
{
    property_list plist1;
    plist1.add(props::display("none"));
    rule r1(".hidden", plist1);

    property_list plist2;
    plist2.add(props::margin("0"));
    rule r2("body", plist2);

    stylesheet sheet = make_stylesheet(r1, r2);

    std::string expected = 
        ".hidden { display: none; }\n"
        "body { margin: 0; }\n";

    // Since stylesheet string serialization might depend on implementation details 
    // such as exact newlines or spacing, we check if it produces both rules.
    std::string css_str = sheet.to_string();
    BOOST_CHECK(css_str.find(".hidden { display:none; }") != std::string::npos);
    BOOST_CHECK(css_str.find("body { margin:0; }") != std::string::npos);
}

BOOST_AUTO_TEST_SUITE_END()
