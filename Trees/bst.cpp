/*
Binary Search Trees

Properties:
- Left nodes are less than or equal to root
- Right nodes are greater than the root

Let n: number of nodes
Best Case:
- Lookup is log(n) 
- Updates are also log(n)

Worst Case:
- Lookup is O(n)
- Updates are also O(n)

Cons: 
- More complex than trees and linked list to maintain

Note:
- When we move left, the successor of the node is the parent
  or the right child of the left node
- When we move right, the succesor is the right node, or the parent
  of the current subtree which is the left child

    Cases:
    - leaf node
    - node with both children
    - node with one children

Full tree:
- Every node has 2 or 0 childern

Complete tree:
- Every level is complete except the last level
- The last level filled from left side

Balanced tree:
- The difference in the depth between two leaves
  is atmost 1
  
Diameter:
- The number of nodes on the longest path between any 
  two leaf nodes.
  
Depth:
- The number of edges from the node to the tree's root node.

Height:
- The number of edges on the longest path from the node to a leaf.
*/

TreeNode{
    int val;
    TreeNode* left, right;
    TreeNode(int x): val(x), left(nullptr), right(nullptr){}
}


//Searching in a BST
bool search(TreeNode* root, int target){
    if(root == nullptr) return false;
    while(root != nullptr && root->val != target){
        if(root->val > target) root = root->left;
        else root = root->right;
    }
    
    return root != nullptr;
}

// Finding the diameter of a tree
 int maxDis(TreeNode* root, int &diameter){
    if(root == nullptr) return 0;
    int left = maxDis(root->left, diameter);
    int right = maxDis(root->right, diameter);
    diameter = max(1+left+right, diameter);
    return max(left, right)+1;
}
