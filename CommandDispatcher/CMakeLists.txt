cmake_minimum_required(VERSION 3.13)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(Commands)
add_subdirectory(Executor)
add_subdirectory(Dispatcher)

add_executable(dispatcherPattern
    main.cpp
)

target_link_libraries(dispatcherPattern
    executor
    dispatcher
    commands
)