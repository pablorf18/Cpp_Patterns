### CommandDispatcher Pattern Description

The CommandDispatcher folder demonstrates the **Command Design Pattern**, which encapsulates a request as an object, allowing you to parameterize objects with different requests, delay or queue a request's execution, and support undoable operations. This example showcases a dispatcher system where commands are executed by specific executors based on their type.

---

#### Folder Structure
```
CommandDispatcher/
├── CMakeLists.txt          # Main CMake configuration for the CommandDispatcher project
├── main.cpp                # Entry point for the example
├── Commands/               # Contains the command definitions
│   ├── CMakeLists.txt      # CMake configuration for the Commands library
│   ├── ICommand.h          # Interface for all commands
│   ├── PayTaxCommand.h     # Concrete command for paying taxes
│   ├── SleepCommand.h      # Concrete command for sleeping
│   └── ThinkCommand.h      # Concrete command for thinking
├── Dispatcher/             # Contains the dispatcher implementation
│   ├── CMakeLists.txt      # CMake configuration for the Dispatcher library
│   ├── IDispatcher.h       # Interface for the dispatcher
│   ├── CommandDispatcher.h # Header file for the CommandDispatcher class
│   └── CommandDispatcher.cpp # Implementation of the CommandDispatcher class
└── Executor/               # Contains the executor implementations
    ├── CMakeLists.txt      # CMake configuration for the Executor library
    ├── IExecutor.h         # Interface for all executors
    ├── AnimalExecutor.h    # Header file for the AnimalExecutor class
    ├── AnimalExecutor.cpp  # Implementation of the AnimalExecutor class
    ├── HumanExecutor.h     # Header file for the HumanExecutor class
    └── HumanExecutor.cpp   # Implementation of the HumanExecutor class
```

---

#### Key Components

1. **Commands**:
   - Commands encapsulate the details of a request and provide a uniform interface for execution.
   - **ICommand**: The base interface for all commands, defining methods like `getName()` and `getParam()`.
   - **Concrete Commands**:
     - `PayTaxCommand`: Represents a command to pay taxes with a specific amount.
     - `ThinkCommand`: Represents a command to think about a specific topic.
     - `SleepCommand`: Represents a command to sleep for a specified duration.

2. **Executors**:
   - Executors are responsible for executing specific types of commands.
   - **IExecutor**: The base interface for all executors, defining methods like `isSupported()` and `execute()`.
   - **Concrete Executors**:
     - `AnimalExecutor`: Executes commands related to animals, such as sleeping or thinking.
     - `HumanExecutor`: Executes commands related to humans, such as paying taxes.

3. **Dispatcher**:
   - The dispatcher acts as a mediator between commands and executors.
   - **IDispatcher**: The base interface for the dispatcher, defining methods like `setExecutor()` and `runCommand()`.
   - **CommandDispatcher**: The concrete implementation of the dispatcher, which maintains a list of executors and delegates commands to the appropriate executor.

4. **Main Program**:
   - The main.cpp file demonstrates the interaction between the dispatcher, executors, and commands.
   - It creates a dispatcher, registers executors, and runs various commands.

---

#### How It Works
1. **Command Creation**:
   - Commands are created as objects that encapsulate specific requests (e.g., `PayTaxCommand`, `ThinkCommand`, `SleepCommand`).

2. **Executor Registration**:
   - Executors (e.g., `AnimalExecutor`, `HumanExecutor`) are registered with the dispatcher using the `setExecutor()` method.

3. **Command Execution**:
   - The dispatcher receives commands via the `runCommand()` method.
   - It iterates through the registered executors to find one that supports the command using the `isSupported()` method.
   - The command is executed by the appropriate executor using the `execute()` method.

---

#### Example Output
When you run the program, you will see output similar to the following:
```
Starting dispatcher pattern example
Command executed with result: 0
Animal is thinking: Think about life
Command executed with result: 0
Animal is sleeping: Sleep for 8 hours
Command executed with result: 0
```

---

#### Purpose
This example demonstrates:
- Decoupling between the sender (dispatcher) and the receiver (executor) of requests.
- How to use the Command pattern to encapsulate requests as objects.
- Practical usage of modern C++ features like `std::shared_ptr` for memory management.

---

#### How to Build and Run
1. Navigate to the CommandDispatcher directory.
2. Build the project using CMake:
   ```bash
   mkdir build
   cd build
   cmake ..
   cmake --build .
   ```
3. Run the executable:
   ```bash
   ./dispatcherPattern
   ```

This example is a great starting point for understanding the Command pattern and its applications in C++.
