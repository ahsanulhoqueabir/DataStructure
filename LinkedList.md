<h1 align="center"> Linked List </h1>

A linked list is a data structure consisting of a sequence of elements, in which each element points to the next element in the sequence. The elements of a linked list are not stored at contiguous memory locations.

<b>There are different types of linked lists: </b>

- Singly Linked List: In this type of linked list, each node contains a data field and a reference(link) to the next node in the sequence.
- Doubly Linked List: In this type of linked list, each node contains a data field and two reference links: one pointing to the previous node and another pointing to the next node in the sequence.
- Circular Linked List: In this type of linked list, the last node of the list points to the first node, thereby making the list circular.

<h2> Singly Linked List </h2>

- A singly linked list contains nodes with a pointer to the next node in the sequence.
- Linked list has a list pointer varianble `Head / Start` ,containing the address of the 1st node in the list.
- Each node has data and a reference (pointer) to the next node in the sequence.
- The last node points to NULL as there is no next node.

<h3> Difference Between  Singly Linked List  and 1D Array
</h3>

<table border="1">
  <tr>
    <th>Feature</th>
    <th>Singly Linked List</th>
    <th>Array</th>
  </tr>
  <tr>
    <td>Memory Allocation</td>
    <td>Elements stored in nodes with links to the next node</td>
    <td>Contiguous memory locations for elements</td>
  </tr>
  <tr>
    <td>Size</td>
    <td>Dynamically resizable</td>
    <td>Fixed size</td>
  </tr>
  <tr>
    <td>Insertion and Deletion</td>
    <td>Efficient, especially in the middle</td>
    <td>Inefficient, especially for middle operations</td>
  </tr>
  <tr>
    <td>Random Access</td>
    <td>Requires linear traversal</td>
    <td>Constant-time O(1) access with an index</td>
  </tr>
  <tr>
    <td>Memory Overhead</td>
    <td>More memory overhead due to links</td>
    <td>Less memory overhead</td>
  </tr>
  <tr>
    <td>Implementation</td>
    <td>Requires explicit memory allocation and manipulation</td>
    <td>Typically a built-in data type in most languages</td>
  </tr>
</table>


> [!NOTE]
> The array implementation is typically more efficient than linked list implementation when it comes to insertions/deletions.        


**Advantages of Linked Lists:**

1. **Dynamic Size:** Easily adapts to varying amounts of data during runtime.
2. **Easy Insertion and Deletion:** Efficient for adding or removing elements, especially in the middle.
3. **No Wasted Memory:** Allocates memory as needed, avoiding unnecessary space.
4. **No Fixed Size:** Adaptable to changing data without requiring a predetermined size.
5. **Memory Utilization:** Can be more memory-efficient in certain scenarios.
6. **Ease of Implementation:** Some operations, like mid-element insertion, are simpler compared to arrays.

**Disadvantages of Linked Lists:**

1. **Sequential Access:** Requires sequential traversal, resulting in O(n) time complexity for random access.
2. **Memory Overhead:** Higher memory usage due to additional links between nodes.
3. **No Constant-Time Access:** Lacks constant-time access to elements compared to arrays.
4. **Complexity of Implementation:** Involves explicit memory allocation and manipulation.
5. **Cache Locality:** May not exhibit good cache locality, affecting performance in certain scenarios.
6. **Limited Direct Access:** No direct access to elements by index, limiting certain algorithms and data access patterns.






