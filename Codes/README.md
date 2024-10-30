# Data Structures Code Repository

This repository contains C++ implementations of fundamental data structures for the **Data Structures Course** at **Istanbul Zaim University (IZU)**, Turkey. Each data structure is implemented with a focus on basic operations to understand how they work internally and is explained in detail in this README.

---

## Code Descriptions

### 1. Singly Linked List

**File:** `singly_linked_list.cpp`

This code provides a basic implementation of a **singly linked list** with operations for inserting a node at the beginning and viewing the list.

#### Code Structure

- **Node Class**
  - Represents each element (node) in the linked list.
  - Contains two attributes:
    - `data`: Stores the integer data of the node.
    - `next`: A pointer to the next node in the list.
  - **Constructor**: Initializes the node with the given `data` and sets `next` to `nullptr`.

- **LinkedList Class**
  - Manages the linked list operations.
  - **Private attribute**:
    - `head`: Points to the first node in the list.
  - **Public Methods**:
    - `LinkedList()`: Constructor that initializes an empty list by setting `head` to `nullptr`.
    - `insertAtBegin(int d)`: Adds a new node with the given data to the beginning of the list.
    - `viewList()`: Traverses and prints each node’s data, ending with `nullptr` to indicate the end of the list.

- **Main Function**
  - Creates an instance of `LinkedList`.
  - Inserts two nodes with data `1` and `2` at the beginning of the list.
  - Calls `viewList()` to print the contents of the list.

#### Key Operations Explained

1. **Insert at Beginning (`insertAtBegin`)**:
   - Creates a new node with the given data.
   - Points `newNode->next` to the current `head` of the list.
   - Updates `head` to the new node, making it the first node in the list.
   - Example Output after `insertAtBegin(1)` followed by `insertAtBegin(2)`:
     ```
     Inserted 2 at beginning
     Inserted 1 at beginning
     ```

2. **View List (`viewList`)**:
   - Starts from `head` and traverses the list, printing each node’s data followed by an arrow (`->`).
   - Ends with `nullptr` to indicate the end of the list.
   - Example Output:
     ```
     2->1->nullptr
     ```

#### Planned Updates
- **Insert at End (`insertAtEnd`)**: This method is planned to be added to enable insertion at the end of the list.

---

## Usage

To compile and run the singly linked list code:

```bash
g++ singly_linked_list.cpp -o singly_linked_list
./singly_linked_list
