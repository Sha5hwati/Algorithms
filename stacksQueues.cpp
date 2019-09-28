/*
Queues
FIFO
First element added in a queue will be processed
first

Implementing Queue using vectors:
enqueue: vector.push_back()
dequeue: move the start pointer down by 1

A more efficient way to use vectors
for uses is to use a circular queue
It uses two pointers:
- points to the front of the queue
- points to the back of the queue

Can be used to find moving average
in case of sliding window problem
and BFS

Queues are useful when the ordering of t
he data matters as it preserves that ordering. 
For example, they're used for caching.

enqueue: O(1)
dequeue: O(1)
*/

#include<queue>
std::queue<int> q;
q.front();
q.push(x);
q.pop();
q.empty();
q.size();

/*
Stacks
LIFO
Last element added in stack is the first to be processed

Used to find path from root node to target
The processing order of the nodes is the exact opposite order as how they were added to the stack, which is Last-in-First-out (LIFO)

The deepest node is the last node pushed to the stack.

Also useful for backtracking
used to implement recursion iteratively
*/

#include<stack>
std::stack<int> stk;
stk.top();
stk.push(x);
stk.pop();
stk.empty();
stk.size();

