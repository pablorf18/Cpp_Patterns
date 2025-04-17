add_library(executor STATIC
    IExecutor.h
    AnimalExecutor.h
    AnimalExecutor.cpp
    HumanExecutor.h
    HumanExecutor.cpp
)

target_include_directories(executor PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/../Commands
)
