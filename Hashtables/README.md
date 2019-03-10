# Hash tables

* Implements an associative array abstract data structure that can map keys to values.
* It uses a **hash function** to compute the index into an array of buckets, where the value is stored.
* **Collisions:** Ideally, each value should be assigned to a unique buckets but most hash functions are imperfect and generate one key for more than one value.
* Allows insertion, deletion and find in amortized **constant** time. In many cases better than a tree or other form of table.
* Used in database indexing and caching.

![](https://alpingi.com/wp-content/uploads/2018/02/AMCAT-Hash-Tables-Questions.jpg)

### Hashing
```
hash = hashfunc(key)
index = hash % array_size
```
* **Problems with array_size of 2^N** If the array size is a power of 2, it will lead to a clustered has function because 2^n is equivalent to keeping only lower n bits while the upper n bits are never used. Try masking instead.

* A good hash function supports a uniform distribution. Non-uniform distribution may lead to non-constant time.

* Prime array size leads to better indexing.

* **Load factor**
```
load factor = n/k

n number of entries occupied in the hash table
k number of buckets
```
As the load factor grows larger, the hash table becomes slower and might fail the expected constant time property. So, most hash tables have an upper bound after which it resizes. <--- Time space tradeoff -->

### Conflict resolution
![](https://www.researchgate.net/profile/Suzanne_Matthews/publication/221718847/figure/fig1/AS:340564944932864@1458208418309/nternal-hash-table-Our-hash-table-data-structure-for-the-phylogenetic-trees-shown-in.png)
#### Seperate chaining
* Chained hash tables with linked list.
* The length of the linked list is propotional to the load factor which
is generally small. Because of this it remains efficient.
* Can also be chained using a self-balancing binary search tree. It leads to extra complexity.
* Dynamic arrays.
* Number of entries can be greater than the size of the array.

#### Open addressing
* All entries are stored in a bucket array itself.
* The locations are determined by the hash function but also by a probe sequence.
	* Linear probing = the interval between probes is fixed.
	* Quadratic probing = uses a quadratic polynomial.
	* Double hashing = new position by another hash function.
* It saves memory.


