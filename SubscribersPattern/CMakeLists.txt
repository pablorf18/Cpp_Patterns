cmake_minimum_required(VERSION 3.13)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(Notifier)
add_subdirectory(Subscriber)

add_executable(subscribersPattern
    main.cpp
)

target_link_libraries(subscribersPattern
    notifier
    subscriber
)