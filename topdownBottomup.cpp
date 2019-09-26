/*
Top down approach
You check the current node before looking at
its children
*/

void topDown(TreeNode* root){
    if(root == nullptr) return;
    //check the root
    //then check the children
    topDown(root->left);
    topDown(root->right);
}

/*
Bottom up approach
You check the leaves before checking the 
root node
*/

void bottomUp(TreeNode* root){
    if(root == nullptr) return;
    //check the childern
    bottomUp(root->left);
    bottomUp(root->right);
    //depending on the value
    //of the childern, perform
    // task on the root
}
