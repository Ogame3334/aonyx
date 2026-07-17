#include <aonyx.hpp>

using namespace aonyx::dom;
namespace css = aonyx::css;
namespace props = css::props;

// AonyxのCSSシステムを利用してスタイルを構築
html_node page_style()
{
    using namespace aonyx::util::literal;

    // プロパティリストの構築
    auto body_props =
        css::make_property_list(props::property::background_color("#121212"),
                                props::property::color("#e0e0e0"),
                                props::property::font_family("'Inter', system-ui, -apple-system, sans-serif"),
                                props::property::margin(0_px),
                                props::property::padding(2_rem),
                                props::property::display("flex"),
                                props::property::flex_direction("column"),
                                props::property::align_items("center"),
                                props::property::line_height("1.6"));

    auto h1_props = css::make_property_list(props::property::color("#00e676"),
                                            props::property::font_size("3.5rem"),
                                            props::property::margin_bottom(0.5_rem));

    auto hero_props =
        css::make_property_list(props::property::text_align("center"), props::property::margin_bottom(3_rem));

    auto features_props =
        css::make_property_list(props::property::display("grid"),
                                props::property::grid_template_columns("repeat(auto-fit, minmax(300px, 1fr))"),
                                props::property::gap("1.5rem"),
                                props::property::width("100%"),
                                props::property::max_width("900px"));

    auto feature_props =
        css::make_property_list(props::property::background("#1e1e1e"),
                                props::property::padding(2_rem),
                                props::property::border_radius(16_px),
                                props::property::border(1_px, "solid", "#333"),
                                props::property::transition("transform 0.2s, box-shadow 0.2s"),
                                props::property::box_shadow(0_px, 4_px, 6_px, props::func::rgb(0, 0, 0, 0.3)));

    // スタイルシートの構築
    auto stylesheet = css::make_stylesheet(css::rule("body", body_props),
                                           css::rule("h1", h1_props),
                                           css::rule(".hero", hero_props),
                                           css::rule(".features", features_props),
                                           css::rule(".feature", feature_props));

    return style()(stylesheet.to_string());
}

void top(AONYX_PARAM(req, res))
{
    auto node = html(attrs::class_("ja"))(
        head(title("Aonyx - Modern C++ Web Framework"), page_style()),
        body(div_(attrs::class_("hero"))(h1("Aonyx"), p("Aonyx is a powerful and stylish C++ web framework.")),
             div_(attrs::class_("features"))(
                 div_(attrs::class_("feature"))(h2("Lightweight"), p("Built for performance and simplicity.")),
                 div_(attrs::class_("feature"))(h2("Modern C++"),
                                                p("Utilizing modern C++ standards for safety and speed.")))));

    res.body = node.to_string();
    res.status = 200;
    res.headers["Content-Type"] = "text/html";
}

int main()
{
    aonyx::http::server server;
    auto& router = server.router();
    router.get("/top", top);

    server.run();
    return 0;
}
