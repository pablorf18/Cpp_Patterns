add_library(notifier STATIC
    INotifier.h
    Notifier.h
    Notifier.cpp
)

target_include_directories(notifier PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/../Subscriber
)
