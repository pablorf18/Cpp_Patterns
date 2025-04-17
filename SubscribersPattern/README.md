### SubscribersPattern Description

The SubscribersPattern folder demonstrates the **Observer Design Pattern**, which is used to establish a one-to-many dependency between objects. In this example, a `Notifier` object notifies multiple `Subscriber` objects whenever an event occurs. This pattern is particularly useful in scenarios where changes in one object need to be reflected in multiple dependent objects without tightly coupling them.

---

#### Folder Structure
```
SubscribersPattern/
├── CMakeLists.txt          # Main CMake configuration for the SubscribersPattern project
├── main.cpp                # Entry point for the example
├── Notifier/               # Contains the Notifier implementation
│   ├── CMakeLists.txt      # CMake configuration for the Notifier library
│   ├── INotifier.h         # Interface for the Notifier
│   ├── Notifier.cpp        # Implementation of the Notifier class
│   └── Notifier.h          # Header file for the Notifier class
└── Subscriber/             # Contains the Subscriber implementation
    ├── CMakeLists.txt      # CMake configuration for the Subscriber library
    ├── ISubscriber.h       # Interface for the Subscriber
    ├── Subscriber.cpp      # Implementation of the Subscriber class
    └── Subscriber.h        # Header file for the Subscriber class
```

---

#### Key Components

1. **Notifier**:
   - The `Notifier` class is responsible for managing a list of subscribers and notifying them when an event occurs.
   - Implements the `INotifier` interface.
   - Key methods:
     - `setSubscriber(std::shared_ptr<ISubscriber> subscriber)`: Adds a subscriber to the list.
     - `doAction()`: Performs an action and notifies all subscribers.
     - `notify()`: Internal method to notify all subscribers.

2. **Subscriber**:
   - The `Subscriber` class represents an entity that listens for notifications from the `Notifier`.
   - Implements the `ISubscriber` interface.
   - Key methods:
     - `onEvent()`: Called when the `Notifier` notifies the subscriber.

3. **Interfaces**:
   - `INotifier`: Defines the interface for the `Notifier` class.
   - `ISubscriber`: Defines the interface for the `Subscriber` class.

4. **Main Program**:
   - The main.cpp file demonstrates the interaction between the `Notifier` and `Subscriber` classes.
   - Creates a `Notifier` instance and multiple `Subscriber` instances.
   - Registers the subscribers with the notifier and triggers an action to notify all subscribers.

---

#### How It Works
1. The `Notifier` maintains a list of subscribers (`std::vector<std::shared_ptr<ISubscriber>>`).
2. Subscribers are added to the `Notifier` using the `setSubscriber` method.
3. When the `Notifier` performs an action (via `doAction`), it calls the `notify` method to inform all registered subscribers.
4. Each subscriber's `onEvent` method is called, allowing them to respond to the notification.

---

#### Example Output
When you run the program, you will see output similar to the following:
```
Starting subscribers pattern example
Notifier is doing an action...
Subscriber 1 received an event!
Subscriber 2 received an event!
```

---

#### Purpose
This example demonstrates:
- Decoupling between the `Notifier` and `Subscriber` objects.
- How to use the Observer pattern to implement event-driven programming.
- Practical usage of modern C++ features like `std::shared_ptr` for memory management.

---

#### How to Build and Run
1. Navigate to the SubscribersPattern directory.
2. Build the project using CMake:
   ```bash
   mkdir build
   cd build
   cmake ..
   cmake --build .
   ```
3. Run the executable:
   ```bash
   ./subscribersPattern
   ```

This example is a great starting point for understanding the Observer pattern and its applications in C++.
