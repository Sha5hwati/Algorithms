/*
DFS on binary tree
It is similar to preorder traversal on trees
A top-down approach

Time complexity: O(n) n: number of nodes
Space: O(h) h: height of the tree
*/

//Recursive
void DFSI(TreeNode* root){
    if(root == nullptr) return;
    cout<<root->val<<endl;
    DFSI(root->left);
    DFSI(root->right);
}

//Iterative
void DFSII(TreeNode* root){
    if(root == nullptr) return;
    stack<TreeNode*> stk;
    stk.push(root);
    while(!stk.empty()){
        TreeNode* top = stk.top();
        stk.pop();
        
        cout<<root->val<<endl;
        if(top->right) stk.push(top->right);
        if(top->left) stk.push(top->left);
    }
}
