add_library(factory STATIC
    CarFactory.h
    CarFactory.cpp
)

target_include_directories(factory PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/../Products)
