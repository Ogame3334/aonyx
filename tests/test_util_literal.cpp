#include <boost/test/unit_test.hpp>
#include <aonyx/util/literal/numerical.hpp>

using namespace aonyx::util;
using namespace aonyx::util::literal;

BOOST_AUTO_TEST_SUITE(UtilLiteralTest)

BOOST_AUTO_TEST_CASE(PixelLiteral)
{
    numerical n1 = 10_px;
    BOOST_CHECK_EQUAL(n1.to_string(), "10px");

    numerical n2 = 1.5_px;
    BOOST_CHECK_EQUAL(n2.to_string(), "1.5px");
}

BOOST_AUTO_TEST_CASE(RemLiteral)
{
    numerical n1 = 20_rem;
    BOOST_CHECK_EQUAL(n1.to_string(), "20rem");

    numerical n2 = 2.5_rem;
    BOOST_CHECK_EQUAL(n2.to_string(), "2.5rem");
}

BOOST_AUTO_TEST_CASE(EmLiteral)
{
    numerical n1 = 30_em;
    BOOST_CHECK_EQUAL(n1.to_string(), "30em");

    numerical n2 = 3.5_em;
    BOOST_CHECK_EQUAL(n2.to_string(), "3.5em");
}

BOOST_AUTO_TEST_CASE(PercentLiteral)
{
    numerical n1 = 100_per;
    BOOST_CHECK_EQUAL(n1.to_string(), "100%");

    numerical n2 = 50.5_per;
    BOOST_CHECK_EQUAL(n2.to_string(), "50.5%");
}

BOOST_AUTO_TEST_SUITE_END()
