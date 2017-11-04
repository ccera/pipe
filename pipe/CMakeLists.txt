cmake_minimum_required(VERSION 3.0)
project (pipe)

#find_path(ASIO_INCLUDE ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/asio-1.10.6/include)
#include_directories(${ASIO_INCLUDE})

add_library(Pipe channel.h channel.cpp buffer.h buffer.cpp channelfactory.h channelfactory.cpp)

target_include_directories(Pipe PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(Pipe PUBLIC thirdparty/asio-1.10.6/include)
