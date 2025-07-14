cmake_minimum_required(VERSION 3.15)
project(Nuaza's Fanorona VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)
option(ENABLE_TESTS      "Build unit tests"      OFF)

# 全局 include 目录
set(PROJECT_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include")

# 子目录
add_subdirectory(src/lib)
add_subdirectory(src/app)

if(ENABLE_TESTS)
    enable_testing()
    add_subdirectory(tests)
endif()