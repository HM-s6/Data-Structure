# Data-Structure (C++)

A deep dive into fundamental data structures, implementing core logic from scratch to ensure optimal performance and memory management.

---

## 🛠 Detailed Technical Overview

### 1. Linked List (Singly)
A dynamic collection of nodes where each node points to the next.
* **Key Operations:** `insertAtHead()`, `insertAtTail()`, `deleteNode()`, `search()`.
* **Complexity:** * Access/Search: $O(n)$
    * Insertion (at head): $O(1)$
* **Best For:** Frequent insertions and deletions where memory is not contiguous.

### 2. Stack (LIFO)
A linear structure following the "Last In, First Out" principle.
* **Key Operations:** `push()`, `pop()`, `peek()`, `isEmpty()`.
* **Complexity:** * All operations: $O(1)$
* **Use Cases:** Function calls (recursion), Undo mechanisms, Expression evaluation.

### 3. Queue (FIFO)
A linear structure following the "First In, First Out" principle.
* **Key Operations:** `enqueue()`, `dequeue()`, `getFront()`.
* **Complexity:** * All operations: $O(1)$
* **Use Cases:** Scheduling tasks, Breadth-First Search (BFS), Handling shared resources (Printers).

### 4. Binary Search Tree (BST)
A hierarchical structure where each node has at most two children.
* **Property:** Left child < Root < Right child.
* **Key Operations:** `insert()`, `search()`, `inOrder()`, `preOrder()`, `postOrder()`.
* **Complexity:** * Average Search/Insert: $O(\log n)$
    * Worst Case (Skewed Tree): $O(n)$
* **Key Benefit:** Extremely fast searching and sorted data retrieval.

---

## 📊 Summary of Time Complexity

| Structure | Access | Search | Insertion | Deletion |
| :--- | :---: | :---: | :---: | :---: |
| **Linked List** | $O(n)$ | $O(n)$ | $O(1)$ | $O(1)$ |
| **Stack** | $O(n)$ | $O(n)$ | $O(1)$ | $O(1)$ |
| **Queue** | $O(n)$ | $O(n)$ | $O(1)$ | $O(1)$ |
| **BST** | $O(\log n)$ | $O(\log n)$ | $O(\log n)$ | $O(\log n)$ |

---

## 💻 Technical Stack
* **Language:** C++17
* **Memory Management:** Manual (using `new` and `delete`) to demonstrate memory safety.
* **Architecture:** Object-Oriented Programming (Classes & Templates).

---
