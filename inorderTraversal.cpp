/*
Inorder Traversal
left -> root -> right

In a BST, inorder traversal gives a sort array
The prev element is always less than the curr element

Time complexity: O(n) n: number of nodes
Space: O(h) h: height of the tree
*/

TreeNode{
    int val;
    TreeNode* left, right;
    TreeNode(int x): val(x), left(nullptr), right(nullptr){}
}

//Recursive
void inorderTraversalI(TreeNode* root){
    if(root == nullptr) 
        return;
    inorderTraversalI(root->left);
    cout<<root->val<<endl;
    inorderTraversalI(root->right);
}

//Iterative
void inorderTraversalII(TreeNode* root){
    if(root == nullptr)
        return;
        
    stack<TreeNode*> stk;
    while(root){
        stk.push(root);
        root=root->left;
    }
    
    while(!stk.empty()){
        TreeNode* top = stk.top();
        stk.empty();
        cout<<top->val<<endl;
        
        TreeNode* right = top->right;
        while(right){
            stk.push(right);
            right = right->left;
        }
    }
}
