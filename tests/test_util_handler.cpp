#include <boost/test/unit_test.hpp>
#include <aonyx/util/handler/call_handler.hpp>
#include <aonyx/util/handler/handler.hpp>
#include <aonyx/util/handler/handler_traits.hpp>
#include <aonyx/util/handler/make_handler.hpp>
#include <aonyx/util/handler/param_from_string.hpp>

using namespace aonyx::util;

BOOST_AUTO_TEST_SUITE(UtilHandlerTest)

BOOST_AUTO_TEST_CASE(ParamFromStringInt)
{
    BOOST_CHECK_EQUAL(param_from_string<int>("42"), 42);
    BOOST_CHECK_EQUAL(param_from_string<int>("-10"), -10);
    BOOST_CHECK_THROW(param_from_string<int>("abc"), std::invalid_argument);
}

BOOST_AUTO_TEST_CASE(ParamFromStringBool)
{
    BOOST_CHECK_EQUAL(param_from_string<bool>("true"), true);
    BOOST_CHECK_EQUAL(param_from_string<bool>("1"), true);
    BOOST_CHECK_EQUAL(param_from_string<bool>("false"), false);
    BOOST_CHECK_EQUAL(param_from_string<bool>("0"), false);
    BOOST_CHECK_EQUAL(param_from_string<bool>("random"), false);
}

BOOST_AUTO_TEST_CASE(ParamFromStringString)
{
    BOOST_CHECK_EQUAL(param_from_string<std::string>("hello"), "hello");
}

BOOST_AUTO_TEST_CASE(MakeHandlerSuccess)
{
    std::function<void(const aonyx::http::request&, aonyx::http::response&, int, std::string)> my_func =
        [](const aonyx::http::request&, aonyx::http::response& res, int id, std::string name) {
            res.status = 200;
            res.body = name + std::to_string(id);
        };

    inner_handler_t handler = make_handler(my_func);

    aonyx::http::request req;
    aonyx::http::response res;
    inner_handler_params_t params = {"123", "alice"};

    handler(req, res, params);

    BOOST_CHECK_EQUAL(res.status, 200);
    BOOST_CHECK_EQUAL(res.body, "alice123");
}

BOOST_AUTO_TEST_CASE(MakeHandlerInvalidArgument)
{
    std::function<void(const aonyx::http::request&, aonyx::http::response&, int)> my_func =
        [](const aonyx::http::request&, aonyx::http::response&, int) {
            // Will throw invalid_argument if parsing fails, but param_from_string handles it before body execution
        };

    inner_handler_t handler = make_handler(my_func);

    aonyx::http::request req;
    aonyx::http::response res;
    inner_handler_params_t params = {"not_an_int"}; // Throws invalid_argument from param_from_string

    handler(req, res, params);

    BOOST_CHECK_EQUAL(res.status, 400);
    BOOST_CHECK_EQUAL(res.body, "400 Bad Request");
}

BOOST_AUTO_TEST_CASE(MakeHandlerUserException)
{
    std::function<void(const aonyx::http::request&, aonyx::http::response&)> my_func =
        [](const aonyx::http::request&, aonyx::http::response&) {
            throw std::runtime_error("Something went wrong");
        };

    inner_handler_t handler = make_handler(my_func);

    aonyx::http::request req;
    aonyx::http::response res;
    inner_handler_params_t params;

    handler(req, res, params);

    BOOST_CHECK_EQUAL(res.status, 500);
    BOOST_CHECK_EQUAL(res.body, "500 Internal Server Error");
}

BOOST_AUTO_TEST_CASE(MakeHandlerMismatchArgs)
{
    std::function<void(const aonyx::http::request&, aonyx::http::response&, int)> my_func =
        [](const aonyx::http::request&, aonyx::http::response&, int) {};

    inner_handler_t handler = make_handler(my_func);

    aonyx::http::request req;
    aonyx::http::response res;
    inner_handler_params_t params; // Empty args but needs 1

    handler(req, res, params);

    BOOST_CHECK_EQUAL(res.status, 500); // call_handler returns false -> 500
}

BOOST_AUTO_TEST_SUITE_END()
