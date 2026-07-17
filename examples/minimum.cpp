#include <aonyx.hpp>

using namespace aonyx::dom;

int main()
{
    aonyx::http::server server;

    server.router().get(
        "/",
        [](AONYX_PARAM(req, res))
        {
            res.body = p("hello, aonyx!!").to_string();
            res.headers["Content-Type"] = "text/html";
            res.status = 200;
        }
    );

    server.run();

    return 0;
}
