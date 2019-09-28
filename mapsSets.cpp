/*
Maps

A red black trees. 
They are very similar to hash tables
however, they are ordered
The key is always unique, so use a 
count for duplicates
Hence you can use it for binary searching
and ordering data

Runtime
Insert: O(log n)
Delete: O(log n)
Search: O(log n)
*/

#include<map>
std::map<int, int> Map;
Map.lower_bound(key)

/*
Sets

They are very similar to map
As in they contain ORDERED UNIQUE data
We can binary search on this as well

Runtime
Insert: O(log n)
Delete: O(log n)
Search: O(log n)
*/

#include<set>
std::set<int> Set;
Set.lower_bound(key);

/*
Unordered sets

They are like hash tables which 
contain only unique values in 
unsorted value

Since they are not sorted, 
search is linear

Runtime
Insert: O(1)
Delete: O(1)
Search: O(N)
*/

#include<unordered_set>
std::unordered_set<int> Set;


