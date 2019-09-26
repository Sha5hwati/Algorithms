/*
Preorder Traversal of binary tree
root -> left -> right
*/

TreeNode{
  int val;
  TreeNode* left, right;
  TreeNode(int v): val(v), left(nullptr), right(nullptr){}
}

//Recursive
void preOrderI(TreeNode* root){
    if(root == nullptr) return;
    cout<<root->val<<endl;
    preOrderI(root->left);
    preOrderI(root->right);
}

//Iterative
void preOrderII(TreeNode* root){
    if(root == nullptr) return;
    stack<TreeNode*> stk;
    stk.push(root);
    while(!stk.empty()){
        TreeNode* top = stk.top();
        stk.pop();
        cout<<top->val<<endl;
        if(top->right) stk.push(top->right);
        if(top->left) stk.push(top->left);
    }
}
