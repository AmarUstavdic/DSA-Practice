cmake_minimum_required(VERSION 3.0.0)

project(dsa)

add_executable(dsa main.cpp)

target_link_directories(dsa PRIVATE ${CMAKE_SOURCE_DIR}/MyDSALibrary/build)

target_link_libraries(dsa MyDSALibrary)
