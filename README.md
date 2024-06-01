# Linear Data Structures
## Stack
A stack is a linear data structure where all insertions and deletions are restricted to one end, called the top. It follows the Last-In-First-Out (LIFO) principle, meaning the last element inserted is the first to be removed.

### Principal Operations on a Stack
- push(element): Adds an element to the top of the stack.
- pop(): Removes the element from the top of the stack.
- isEmpty(): Checks if the stack is empty.
- isFull(): Checks if the stack is full.
- top(): Returns the element at the top of the stack without removing it.
### Stack Implementation
#### Using an Array
- Push operation: Check if the stack is full, then add the element to the next available position.
- Pop operation: Check if the stack is empty, then remove the element from the top position.
#### Using a Linked List
- Push operation: Create a new node and make it the top of the stack.
- Pop operation: Remove the node at the top and update the top to the next node.
## Queue
A queue is a First-In-First-Out (FIFO) data structure where the first element inserted is the first element removed. Insertions are made at the rear end, and deletions are made from the front end.

### Principal Operations on a Queue
- enqueue(element): Adds an element to the rear of the queue.
- dequeue(): Removes an element from the front of the queue.
- isEmpty(): Checks if the queue is empty.
- isFull(): Checks if the queue is full.
- front(): Returns the element at the front of the queue without removing it.
- back(): Returns the element at the rear of the queue without removing it.
### Queue Implementation
####  Using an Array
- Enqueue operation: Check if the queue is full, then add the element at the rear position and update the rear.
- Dequeue operation: Check if the queue is empty, then remove the element from the front position and update the front.
####  Using a Linked List
- Enqueue operation: Create a new node and add it at the rear end.
- Dequeue operation: Remove the node from the front and update the front to the next node.
