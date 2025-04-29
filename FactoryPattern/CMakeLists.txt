cmake_minimum_required(VERSION 3.13)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(Products)
add_subdirectory(Factory)

add_executable(FactoryPattern
    main.cpp
)

target_include_directories(FactoryPattern PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/Products
    ${CMAKE_CURRENT_LIST_DIR}/Factory)

target_link_libraries(FactoryPattern
    factory
    cars
)