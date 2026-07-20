#pragma once

/// @brief ライブラリのメジャーバージョン | Library major version
#define AONYX_VERSION_MAJOR 0

/// @brief ライブラリのマイナーバージョン | Library minor version
#define AONYX_VERSION_MINOR 1

/// @brief ライブラリのリビジョンバージョン | Library revision version
#define AONYX_VERSION_REVISION 2

/// @brief プレリリースタグ | Pre-release tag
#define AONYX_VERSION_PRERELEASE_TAG U""

/// @brief ライブラリのバージョン | Library version
#define AONYX_VERSION ((AONYX_VERSION_MAJOR * 100 * 100) + (AONYX_VERSION_MINOR * 100) + (AONYX_VERSION_REVISION))

/// @brief ライブラリのバージョンの文字列（簡易版） | Short Library version
#define AONYX_VERSION_SHORT_STRING U"0.1.2"

/// @brief ライブラリのバージョンの文字列 | Library version
#define AONYX_VERSION_STRING U"0.1.2" AONYX_VERSION_PRERELEASE_TAG
