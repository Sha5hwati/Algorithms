/*
Postorder Traversal
left -> right -> root

Deleting the nodes from a tree
Visits leaves before the root
Similar to topological sort on a tree
*/

TreeNode{
    int val;
    TreeNode* right, left;
    TreeNode(int x): val(x), right(nullptr), left(nullptr){}
}

//Recursive
void postorderTraversalI(TreeNode* root){
    if(root == nullptr) return;
    postorderTraversalI(root->left);
    postorderTraversalI(root->right);
    cout<<root->val<<endl;
}

//Iterative
void postorderTraversalII(TreeNode* root){
    if(root == nullptr) return;
    
    vector<int> ans;
    stack<TreeNode*> stk;
    stk.push(root);
    while(!stk.empty()){
        TreeNode* top = stk.top();
        stk.pop();
        ans.push_back(top->val);
        if(top->left) stk.push(top->left);
        if(top->right) stk.push(top->right);
    }
    reverse(ans.begin(), ans.end());
    for(auto &x: ans) cout<<x<<endl;
}
