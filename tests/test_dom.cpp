#include <boost/test/unit_test.hpp>
#include <aonyx/dom.hpp>

using namespace aonyx::dom;

BOOST_AUTO_TEST_SUITE(DOMTest)

BOOST_AUTO_TEST_CASE(HtmlNodeCreation)
{
    html_node node("div");
    BOOST_CHECK_EQUAL(node.tag_name, "div");
    BOOST_CHECK(node.attributes.empty());
    BOOST_CHECK(node.children.empty());
    BOOST_CHECK(node.text_content.empty());
}

BOOST_AUTO_TEST_CASE(HtmlNodeTextContent)
{
    html_node node("p");
    node("Hello World");
    BOOST_CHECK_EQUAL(node.text_content, "Hello World");
    BOOST_CHECK_EQUAL(node.to_string(), "<p>Hello World</p>");
}

BOOST_AUTO_TEST_CASE(HtmlNodeChildren)
{
    html_node parent("div");
    html_node child1("span");
    child1("Child 1");
    html_node child2("span");
    child2("Child 2");

    parent(child1, child2);

    BOOST_CHECK_EQUAL(parent.children.size(), 2);
    BOOST_CHECK_EQUAL(parent.to_string(), "<div><span>Child 1</span><span>Child 2</span></div>");
}

BOOST_AUTO_TEST_CASE(HtmlTagCreation)
{
    html_tag div_tag("div");
    BOOST_CHECK_EQUAL(div_tag.tag_name, "div");

    html_node node = div_tag();
    BOOST_CHECK_EQUAL(node.tag_name, "div");

    html_node node_with_text = div_tag("Text Content");
    BOOST_CHECK_EQUAL(node_with_text.to_string(), "<div>Text Content</div>");
}

BOOST_AUTO_TEST_CASE(HtmlTagWithChildren)
{
    html_tag div_tag("div");
    html_tag span_tag("span");

    html_node node = div_tag(
        span_tag("A"),
        span_tag("B")
    );

    BOOST_CHECK_EQUAL(node.to_string(), "<div><span>A</span><span>B</span></div>");
}

BOOST_AUTO_TEST_SUITE_END()
