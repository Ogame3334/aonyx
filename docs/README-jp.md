<p align="center"><img width="500" alt="aonyx" src="https://github.com/user-attachments/assets/e21c3aca-1986-4940-abc4-d462d443eabb" /></p>

<div align="center">
<a href="https://github.com/Ogame3334/aonyx/blob/main/LICENCE"><img src="https://img.shields.io/badge/license-MIT-4aaa4a"></a>
</div>

<p align="center"><a href="../README.md">English</a> | 日本語</p>

**aonyx** は新時代のC++用Webフレームワークです！！

## 動作要件
- C++23
- Boost
- OpenSSL
- nlohmann/json

## 特徴
- **ルーティング**: パスのルーティングとパラメータのバインディング。
- **JSON**: JSONのサポート。
- **HTML DOM**: HTML DOMのサポート。
- **並行処理**: マルチスレッドサーバー。
- **クライアント**: クライアントリクエストの送信。
- **CSS**: CSSを構築するためのC++オブジェクト。

## ビルド & インストール

```bash
git clone https://github.com/Ogame3334/aonyx.git
cd aonyx
mkdir build
cd build
cmake ..
cmake --build .
sudo cmake --install .
```

## CMakeプロジェクトへの統合方法

### `find_package` を使う場合 (aonyx インストール後)

```cmake
find_package(aonyx REQUIRED)

target_link_libraries(your_target PRIVATE aonyx::aonyx)
```

### `add_subdirectory` を使う場合 (FetchContent / サブモジュール)

```cmake
include(FetchContent)
FetchContent_Declare(
    aonyx
    GIT_REPOSITORY https://github.com/Ogame3334/aonyx.git
    GIT_TAG main
)
set(AONYX_BUILD_EXAMPLES OFF)
set(AONYX_INSTALL OFF)
FetchContent_MakeAvailable(aonyx)

target_link_libraries(your_target PRIVATE aonyx::aonyx)
```

## Special Thanks
以下の方々のご協力に深く感謝いたします。

<table>
  <tr>
    <td width="80" align="center">
      <a href="https://github.com/yaito3014">
        <img
          src="https://avatars.githubusercontent.com/u/29890657?v=4"
          width="50"
          alt="yaito3014"
        ><br>
        <sub>yaito3014</sub>
      </a>
    </td>
  </tr>
</table>
