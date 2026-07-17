<p align="center"><img width="500" alt="aonyx" src="https://github.com/user-attachments/assets/e21c3aca-1986-4940-abc4-d462d443eabb" /></p>

<div align="center">
<a href="https://github.com/Ogame3334/aonyx/blob/main/LICENCE"><img src="https://img.shields.io/badge/license-MIT-4aaa4a"></a>
</div>

<p align="center">English | <a href="./docs/README-jp.md">日本語</a></p>

**aonyx** is a brand new web framework for C++ !!

## requires
- C++23
- Boost
- OpenSSL
- nlohmann/json

## Features
- **Routing**: Routing paths and binding parameters.
- **JSON**: JSON support.
- **HTML DOM**: HTML DOM support.
- **Concurrency**: Multi-threaded server. 
- **Client**: client request.
- **CSS**: C++ object for CSS.

## How to build and install

```bash
git clone https://github.com/Ogame3334/aonyx.git
cd aonyx
mkdir build
cd build
cmake ..
cmake --build .
cmake --install .
```

## How to integrate into your CMake project

### Using `find_package` (after install)

```cmake
find_package(aonyx REQUIRED)

target_link_libraries(your_target PRIVATE aonyx::aonyx)
```

### Using `add_subdirectory` (FetchContent / submodule)

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
I deeply appreciate the help of the following people.

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
