cmake_minimum_required(VERSION 3.13)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(Singleton)
add_subdirectory(SingletonPtr)

add_executable(singletonPattern
    main.cpp)

target_link_libraries(singletonPattern
    singleton
    singletonPtr)

target_include_directories(singletonPattern PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/Singleton
    ${CMAKE_CURRENT_LIST_DIR}/SingletonPtr)