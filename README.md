# C++ Data Structures Library

A comprehensive C++ template-based library implementing various fundamental data structures including dynamic arrays, doubly linked lists, queues, and stacks. This library provides efficient and type-safe implementations with a rich set of operations.

## Features

### Dynamic Array (`clsDynamicArray`)
- Generic template-based implementation
- Dynamic resizing capabilities
- Array manipulation operations (insert, delete, find)
- Binary search implementation for sorted arrays
- Reverse operation support
- Memory-efficient implementation

### Doubly Linked List (`clsDbLinkedList`)
- Bidirectional node traversal
- Comprehensive node manipulation
- Efficient insertion and deletion at both ends
- Find operations
- Reverse functionality
- Property-based access to head, tail, and size

### Queue Implementations
1. **Linked List-based Queue** (`clsMyQueue`)
   - FIFO (First-In-First-Out) operations
   - Front and back access
   - Dynamic size management
   - Reverse capability
   - Item updates and insertions

2. **Array-based Queue** (`clsMyQueueUseArray`)
   - Array-backed implementation
   - Standard queue operations
   - Random access capability
   - Memory-efficient design

3. **Queue Line System** (`clsQueueLine`)
   - Ticket-based queue management
   - Wait time estimation
   - Queue statistics
   - Customizable prefix system
   - Bidirectional queue visualization

### Stack Implementations
- Template-based stack class
- LIFO (Last-In-First-Out) operations
- Top and bottom element access
- Built on queue foundation for maximum code reuse

### String Manipulation Stack (`clsMyStringUseStack`)
- Undo/Redo functionality
- String value management
- Stack-based operation history

## Usage Examples

### Dynamic Array
```cpp
clsDynamicArray<int> arr(5);
arr.SetItem(0, 10);
arr.SetItem(1, 20);
arr.Display(); // Output: 10 20
arr.Reverse();
arr.Display(); // Output: 20 10
```

### Doubly Linked List
```cpp
clsDbLinkedList<int> list;
list.InsertAtBeginning(1);
list.InsertAtEnding(2);
list.TraverseBeginning(); // Output: 1, 2
```

### Queue
```cpp
clsMyQueue<int> queue;
queue.push(1);
queue.push(2);
cout << queue.front; // Output: 1
queue.pop();
```

### Queue Line System
```cpp
clsQueueLine queueLine("A", 5);
queueLine.IssueTicket();
queueLine.PrintInfo();
queueLine.ServeNextClient();
```

## Implementation Details

- Template-based classes for type safety and reusability
- Exception handling for robust operation
- Property accessors for convenient member access
- Comprehensive memory management
- Bidirectional operations where applicable

## Best Practices

1. Always check return values from operations that might fail
2. Use appropriate error handling when working with indices
3. Consider using the property accessors for cleaner code
4. Remember to manage memory properly when using dynamic arrays
5. Use the appropriate queue implementation based on your needs

## Requirements

- C++ compiler with support for:
  - Templates
  - STL containers
  - Property accessors (`__declspec`)

---
Feel free to report issues or suggest improvements through the GitHub issues system.
