/*
Sorting Algorithms

Inplace: modify given list
         don't return a new list
         no extra memory

Stable sort: Retains the order of duplicates
        ([3, 2*, 4, 2] -> [2*, 2, 3, 4])
        In case of sorting objects with
        multiple save features, stable sort can
        be used to sort it with a different feature
----  
* Merge Sort:
- Divide and conquer strategy
- Recursively sort each half
- Merge the sorted lists //O(N)

Runtime:
Time - Worst - O(NlogN) Best - O(NlogN)
Space - O(N)
Stable - Yes
Inplace - No

----
* Quick Sort:
- Two pointer swapping
- Select a pivot(usually the middle/last element)
- If the pivot is the median, than the array is 
  split into half
- Move all elements less than the pivot to left 
  and greater than the pivot to the right
- Recusively keep doing that for each half

Runtime:
Time: Best-O(NlogN) Worst Case: O(N^2) Average: O(NlogN)
Space: O(logN) = stack calls, other than that O(1)
Stable: No
Inplace: Yes

----
* Insertion sort:
- We take a element from unsorted list and insert them
  into their sorted list position
- Easier on linked list as insertion takes O(1)

Runtime:
Time: Best- O(N) list already sorted
      Worst- O(N^2) reversed list
Space: O(1)
Stable: Yes
Inplace: Yes

----
* Selection Sort:
- Finding the minimum value in the rest of the list and 
  swapping it with the value in front of the list
  
Time: Best - O(N^2), Worst - O(N^2)
Stable: No
Inplace: Yes

----
* Radix Sort:
- Helpful when the numbers that we are sorting is bounded
- Grouping the lists by digits and looping through the 
  digits in some order
  
Runtime:
Time: Best- O(KN) Worst - O(KN) 
      K: number of digits in a number in the array   
Space: O(K)
Stable: Yes, if we go through the digits from right to left (<--)
Inplace: No

----
* Counting Sort:
- Helpful when the numbers that we are sorting is bounded
- Grouping the lists by the counts of the value

Runtime:
Time: Best- O(N), Worst - O(N)
Space: O(N)
Stable: Yes
Inplace: No
*/
