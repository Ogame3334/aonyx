#pragma once

#include <string_view>

namespace aonyx::http
{
    constexpr std::string_view mime_type(std::string_view ext) noexcept
    {
        using sv = std::string_view;

        if (ext == "html" || ext == "htm")  return sv("text/html");
        if (ext == "css")                   return sv("text/css");
        if (ext == "js" || ext == "mjs")    return sv("text/javascript");
        if (ext == "json")                  return sv("application/json");
        if (ext == "png")                   return sv("image/png");
        if (ext == "jpg" || ext == "jpeg")  return sv("image/jpeg");
        if (ext == "gif")                   return sv("image/gif");
        if (ext == "svg" || ext == "svgz")  return sv("image/svg+xml");
        if (ext == "ico")                   return sv("image/x-icon");
        if (ext == "webp")                  return sv("image/webp");
        if (ext == "avif")                  return sv("image/avif");
        if (ext == "woff")                  return sv("font/woff");
        if (ext == "woff2")                 return sv("font/woff2");
        if (ext == "ttf")                   return sv("font/ttf");
        if (ext == "otf")                   return sv("font/otf");
        if (ext == "pdf")                   return sv("application/pdf");
        if (ext == "txt")                   return sv("text/plain");
        if (ext == "xml")                   return sv("application/xml");
        if (ext == "wasm")                  return sv("application/wasm");
        if (ext == "mp4")                   return sv("video/mp4");
        if (ext == "webm")                  return sv("video/webm");
        if (ext == "mp3")                   return sv("audio/mpeg");
        if (ext == "wav")                   return sv("audio/wav");
        if (ext == "ogg")                   return sv("audio/ogg");

        return sv("application/octet-stream");
    }
}
