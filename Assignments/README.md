# Data Structures Course - Assignments

## Assignment -1 Overview

In this assignment, you will be implementing the `insertAtEnd` function for a **singly linked list** in C++. The goal is to add functionality to insert a new node at the end of the list, building on the basic linked list operations covered in class.

---

## Assignment -1 Details

### Objective

- Implement the `insertAtEnd` function in the `LinkedList` class.
- Ensure that new nodes are correctly added to the end of the list without altering existing nodes.

### Provided Code

The starting code provides a basic singly linked list with the following functionalities:
- `Node` class with `data` and `next` attributes.
- `LinkedList` class with:
  - `insertAtBegin(int d)`: Adds a new node to the beginning of the list.
  - `viewList()`: Prints all nodes in the list from `head` to the end.
  
### Assignment Task: `insertAtEnd`

Add a function `insertAtEnd(int d)` in the `LinkedList` class.

#### Expected Behavior
- When `insertAtEnd` is called, the new node should appear as the last node in the linked list.
- For example, if the list is `1 -> 2 -> nullptr` and we call `insertAtEnd(3)`, the list should become `1 -> 2 -> 3 -> nullptr`.