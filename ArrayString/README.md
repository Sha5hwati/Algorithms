
## Arrays
Arrays are data structures that help store multiple values of same data type in a single variable. The disadvantages are:
* The size of the array has to be given in advanced.
* It is not possible to remove and insert elements in the array.

To overcome these difficulties with a statistically allocated arrays, we use dynamic arrays. The STL has two implementations of dynamic arrays:
* List
* Vector

## Lists
Linked lists are implemented using a sequence of structures called nodes which contain data and a pointer to the next node. Such a list is called **singly linked list**. Each list has a head which is the first node in the list. The last node does not point to anything. In **doubly linked list**, the node contains a pointer to the previous node as well. A **circular linked list** is similar to singly linked list but the last node points to the first node, hence making it circular.


STL lists are implemented using <u>doubly linked lists</u> because of which it we can easily traverse forwards and backward. The only disadvantage of list is that we don't get constant time indexing. This is because it does not use contiguous storage locations.

![Linked lists](https://f879bd6b-a-62cb3a1a-s-sites.googlegroups.com/site/sarvasite/algorithms/fund-algo/linked-list1/Linked-List.GIF?attachauth=ANoY7cqYGQ6Q884kMQ96T6xnk97UnGsTts78kpmPNeMVQVrCYJd8diJQl8lfE3nUr9UqqCv-KaFFr9ZXtNIsHCnHyFJDrDszfUDO_Q8wm4btq2pIvvpsaoQGwfqgtGvJOQrDDaQKGeahS9NkZ0YJIdgeEEPnnzAKXZGj7AVyh_EJQfuyjOUmg6Vkk2wsa9LW_1iPb7H2M1sUvik3lG_kP2ozeZhS1SrwCj4M-dnUpxfIXyWoJNzrz0teVepRr1pZygru5tQmAS0w&attredirects=0)

## Vectors
Vectors are sequence containers representing arrays that can change in size. Just like arrays, we get constant time indexing, i.e, we can use the [] operator.

Compared to arrays vectors use extra memory. When a vector is created it is given a certain size (more than necessary). When the capacity is full, it doubles its storage to accommodate for more elements. This is an expensive ( O(n) ) but since its less often as the size increase, the amortized complexity is O(1). For this reason, pre-allocated vectors have better performance than vector without pre-allocation.
n
## Comparison
### push_back
Although push_backs in <u>vectors & lists</u> is **O(1)**, push_back in vectors is faster than that in a list because the vectors usually have extra memory so it doesn't need to create extra memory for a new element, unlike a list which needs to create a new node each time.

### find
Finding elements in the <u>list & vector</u> is **O(n)** as both the containers perform a linear search to find the elements. The performance of vectors is better because of contiguous memory. When a element is accessed, the next element is automatically copied in the cache memory, making the performance in vectors better.

### insert
Inserting an element at a given position is **O(1)** for a <u>list</u> but **O(n)** for a <u>vector</u>. To insert an element, we need to first find the position of the element which is O(n) in both. But to insert an element, it takes constant time O(1) for a linked list because the pointers need to move only while it takes linear O(n) time to move the element downwards in the vector.
Even if the find is better in vectors, compared to list, it only helps for small number of inserts. For larger inserts, lists outshine vectors.

![vector better for small elements](http://chart.apis.google.com/chart?cht=lc&chs=500x500&chma=10,10,10,40&chf=c,lg,90,FFFFFF,0.2,DDDDDD,0%7Cbg,s,00000000&chtt=Insert%20%2832%20bytes%29%20-%20Milliseconds%20%28less%20is%20better%29&chdl=vector%7Clist&chdlp=b&chco=0F83D6,C40E1D,40FF00,EBE015,A3A3A3,007070,00FFFF,CC7000,00CC70,CC0070,7000CC,A370CC&chd=e:LJMYOCPRRVTZ,xiupyX5y72..&chxl=1:%7Cn=1%27000%7Cn=2%27000%7Cn=4%27000%7Cn=6%27000%7Cn=8%27000%7Cn=10%27000&chxt=y,x&chxr=0,0,155) ![lists better for larger elements](http://chart.apis.google.com/chart?cht=lc&chs=500x500&chma=10,10,10,40&chf=c,lg,90,FFFFFF,0.2,DDDDDD,0%7Cbg,s,00000000&chtt=Insert%20%281024%20bytes%29%20-%20Milliseconds%20%28less%20is%20better%29&chdl=vector%7Clist&chdlp=b&chco=0F83D6,C40E1D,40FF00,EBE015,A3A3A3,007070,00FFFF,CC7000,00CC70,CC0070,7000CC,A370CC&chd=e:jOliuFz05Q..,DODJDsEAEIEa&chxl=1:%7Cn=1%27000%7Cn=2%27000%7Cn=4%27000%7Cn=6%27000%7Cn=8%27000%7Cn=10%27000&chxt=y,x&chxr=0,0,3308)

### remove
The behavior of remove is similar to inserts. It takes ****O(1)**** in <u>list</u> but **O(n)** in a <u>vector</u>.

### push_front
Pushing an element on the front of a <u>list</u> is **O(1)** while it is **O(n)** for a <u>vector</u>. For each insert, the elements are moved down in the vector making it expensive.

### sort
Sorting is better in a vector of smaller size because it uses cache memory. But as the size increase, lists have a better performance. This is because, moving pointers is much cheaper than making copy using temp variable.

## Conclusion
For smaller data, vector has better performance. Lists are good for larger data, expect for searching and accessing elements.

 <table style="width:100%">
  <tr>
    <th>Operation</th>
    <th>Vector</th>
    <th>List</th>
    <th> Better </th>
    <th> Reason </th>
  </tr>
  <tr>
    <td>access</td>
    <td>O(1)</td>
    <td>O(n)</td>
    <td>vector</td>
    <td>contiguous memory</td>
  </tr>
  <tr>
    <td>push_back</td>
    <td>O(1)</td>
    <td>O(1)</td>
    <td>vector</td>
    <td>extra memory</td>
  </tr>
  <tr>
    <td>find</td>
    <td>O(n)</td>
    <td>O(n)</td>
    <td>vector</td>
    <td>contiguous memory (cache)</td>
  </tr>
  <tr>
    <td>insert</td>
    <td>O(n)</td>
    <td>O(1)</td>
    <td>list</td>
    <td>only moving pointers, not the other elements</td>
  </tr>
  <tr>
    <td>remove</td>
    <td>O(n)</td>
    <td>O(1)</td>
    <td>list</td>
    <td>only moving pointers, not the other elements</td>
  </tr>
  <tr>
    <td>push_front</td>
    <td>O(n)</td>
    <td>O(1)</td>
    <td>list</td>
    <td>only moving pointers, not the other elements</td>
  </tr>  
</table> 


