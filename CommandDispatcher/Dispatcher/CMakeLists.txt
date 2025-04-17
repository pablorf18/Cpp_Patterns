add_library(dispatcher STATIC
    IDispatcher.h
    CommandDispatcher.h
    CommandDispatcher.cpp
)

target_include_directories(dispatcher PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/../Commands
    ${CMAKE_CURRENT_LIST_DIR}/../Executor
)
