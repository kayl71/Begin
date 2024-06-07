cmake_minimum_required(VERSION 3.19.0)
project(ForTest VERSION 0.1.0 LANGUAGES CXX)

# file(GLOB my_SRC
     # "*.h"
     # "*.cpp"
# )
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

file(GLOB_RECURSE SRC "src/*.cpp")
include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(ForTest ${SRC})