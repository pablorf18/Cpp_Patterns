add_library(commands STATIC
    ICommand.h
    PayTaxCommand.h
    ThinkCommand.h
    SleepCommand.h
)

set_target_properties(commands PROPERTIES LINKER_LANGUAGE CXX)