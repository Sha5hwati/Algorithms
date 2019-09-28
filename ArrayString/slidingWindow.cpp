/*
Sliding window approach

How to identify them?
- Ordered iterable array or string
- Find subrange in the array like the
  longest, smallest, or target value
- Naive solutions are usually O(N^2), O(2^N), or larger.
- Optimal solution(largest, shortest) satisfying
  the given condition

Runtime for sliding window - 
Time: O(N) Space: O(1)

Window: start pointer and end pointer

Different kinds of window -
- Fast/Slow          [s - - - - f   ]
- Fast/Catch-up      [s ------->f   ]
- Fast/Trailing      [      s f     ]
- Front/Back         [f--->   <----b]


1) Fast/Slow
- Grow your window until the condition is satisfied
- Then shrink the window by sliding the slow pointer
  until the condition is unsatisfied
- Eg: Minimum sliding window
  
2) Fast/Catchup
- Instead of moving the slow pointer one at a time, 
  move it up to the fast pointers location
- Eg: Kadane's
  
3) Fast/Trailing
- The slow pointer is pointing one-two indexes behind
  the fast pointer
  
4) Front/Back
- Eg: Rain water, sorted two sum
*/
