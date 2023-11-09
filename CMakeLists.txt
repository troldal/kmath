cmake_minimum_required(VERSION 3.21)
project(kmath)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(kmath INTERFACE)
target_include_directories(kmath INTERFACE $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>
        $<INSTALL_INTERFACE:kmath>)

add_subdirectory(demo)