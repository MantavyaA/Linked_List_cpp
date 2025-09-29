# Linked_List_cpp

# Linked List in C++

A **linked list** is a linear data structure in which elements, called **nodes**, are stored in non-contiguous memory locations.  
Each node has two parts:
- **Data field** → stores the actual value.  
- **Pointer field (next)** → holds the address of the next node.  

In a **singly linked list**, each node points only to its immediate successor, and the last node points to `NULL`.

---

## Characteristics
- Nodes are created dynamically using pointers.  
- Traversal is done sequentially until the pointer becomes `NULL`.  
- Insertions and deletions are simpler compared to arrays, as shifting elements is not required.  

---

## Advantages
- **Dynamic size**: Can grow or shrink at runtime (unlike arrays with fixed size).  
- **Efficient operations**: Insertions and deletions are faster, especially in the middle.  
- **Versatility**: Forms the basis for stacks, queues, and advanced data structures.  

---

## Disadvantages
- Extra memory is required to store pointers.  
- Only sequential access is possible (no direct indexing like arrays).  
- Reverse traversal is not straightforward in a singly linked list.  

---

## Array vs Linked List

| Feature           | Array                      | Linked List                     |
|-------------------|----------------------------|---------------------------------|
| Memory Allocation | Static (fixed size)        | Dynamic (adjustable at runtime) |
| Insertion/Deletion| Costly (requires shifting) | Easy (adjusting pointers only)  |
| Access Time       | O(1) direct indexing       | O(n) sequential traversal       |
| Memory Usage      | May waste space            | Memory efficient (exact usage)  |
| Structure         | Contiguous blocks          | Non-contiguous dynamic nodes    |

---

## Real-Life Applications
- Dynamic memory management.  
- Implementing **stacks, queues, and hash tables**.  
- File systems, social network connections, and OS scheduling.  


# Algorithms & Program Summaries (Singly Linked List)

---

## 1. Node Creation

**Algorithm:**
1. Start.  
2. Define a `Node` class with `data` and `next`.  
3. Create a new node dynamically.  
4. Display `data` and `next`.  
5. End.  

---

## 2. Linked List Traversal

**Algorithm:**
1. Start.  
2. Create three nodes dynamically.  
3. Link nodes (`n1->next = n2`, `n2->next = n3`).  
4. Initialize `temp = n1`.  
5. While `temp != NULL`, print `data`.  
6. Move `temp = temp->next`.  
7. End.  

---

## 3. Insertion at Head

**Algorithm:**
1. Start.  
2. Define `insert_head(head, data)`.  
3. Create a new node with given data.  
4. Set `new_node->next = head`.  
5. Update `head = new_node`.  
6. Repeat insertion as needed.  
7. Traverse and display list.  
8. End.  

---

# Conclusion

This experiment demonstrated the concept and implementation of a **singly linked list in C++**.

- Nodes were dynamically created using constructors and pointers.  
- Traversal enabled sequential access to all elements.  
- Insertion at the head was shown to be efficient compared to arrays.  

**Singly linked lists** thus provide flexibility in memory usage and efficient insertions/deletions, making them a fundamental data structure in computer science.  
