#include <boost/test/unit_test.hpp>
#include <aonyx/version.hpp>

BOOST_AUTO_TEST_SUITE(VersionTest)

BOOST_AUTO_TEST_CASE(CheckVersionMacros)
{
    BOOST_CHECK_EQUAL(AONYX_VERSION_MAJOR, 0);
    BOOST_CHECK_EQUAL(AONYX_VERSION_MINOR, 1);
    BOOST_CHECK_EQUAL(AONYX_VERSION_REVISION, 2);
}

BOOST_AUTO_TEST_CASE(CheckVersionString)
{
    BOOST_CHECK(std::u32string_view(AONYX_VERSION_SHORT_STRING) == U"0.1.2");
    BOOST_CHECK(std::u32string_view(AONYX_VERSION_STRING) == U"0.1.2");
}

BOOST_AUTO_TEST_SUITE_END()
