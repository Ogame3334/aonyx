#include <aonyx/util/escape.hpp>
#include <aonyx/util/numerical.hpp>
#include <aonyx/util/static_string.hpp>
#include <boost/test/unit_test.hpp>

using namespace aonyx::util;

BOOST_AUTO_TEST_SUITE(UtilTest)

BOOST_AUTO_TEST_CASE(EscapeHtml)
{
    std::string_view raw = R"(<div class="test" & id='abc'>)";
    std::string escaped = escape_html(raw);
    BOOST_CHECK_EQUAL(escaped, "&lt;div class=&quot;test&quot; &amp; id=&apos;abc&apos;&gt;");

    BOOST_CHECK_EQUAL(escape_html("normal text"), "normal text");
}

BOOST_AUTO_TEST_CASE(NumericalIntDouble)
{
    numerical n1(42);
    BOOST_CHECK_EQUAL(n1.to_string(), "42");
    BOOST_CHECK(n1.is_positive());

    numerical n2(3.14);
    // Double to string conversion may pad with zeros, e.g. "3.140000"
    // so we just check it starts with "3.14"
    BOOST_CHECK(n2.to_string().starts_with("3.14"));
}

BOOST_AUTO_TEST_CASE(NumericalSuffix)
{
    numerical n1(10ull, "px");
    BOOST_CHECK_EQUAL(n1.to_string(), "10px");

    numerical n2(1.5l, "rem");
    // format of long double may differ, but typically "1.5rem"
    // std::format({}, 1.5l) usually outputs "1.5"
    BOOST_CHECK_EQUAL(n2.to_string(), "1.5rem");
}

BOOST_AUTO_TEST_CASE(NumericalOperators)
{
    numerical n1(10);
    numerical n2(20);

    numerical added = n1 + n2;
    BOOST_CHECK_EQUAL(added.to_string(), "10 + 20");

    numerical sub = n1 - n2;
    BOOST_CHECK_EQUAL(sub.to_string(), "10 - 20");

    numerical pos = +n1;
    BOOST_CHECK_EQUAL(pos.to_string(), "10");

    numerical neg = -n1;
    BOOST_CHECK_EQUAL(neg.to_string(), "-10");
    BOOST_CHECK(!neg.is_positive());

    numerical negneg = -neg;
    BOOST_CHECK_EQUAL(negneg.to_string(), "10");
    BOOST_CHECK(negneg.is_positive());
}

BOOST_AUTO_TEST_CASE(StaticString)
{
    static constexpr static_string str("hello");
    BOOST_CHECK_EQUAL(std::string_view(str.data), "hello");
}

BOOST_AUTO_TEST_SUITE_END()
