/*
Level Order Traversal
Similar to BFS on a tree
On a binary tree both DFS and BFS gives the shortest path
Since we are always going downwards, we do not need
a visited list
*/

TreeNode{
    int val;
    TreeNode* left, right;
    TreeNode(int x): val(x), left(nullptr), right(nullptr){}
}

void levelorderTraversal(TreeNode* root){
    if(root == nullptr) return;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        //number of nodes in the 
        //current level
        int size = q.size();
        while(size--){
            TreeNode* front = q.front();
            q.pop();
            cout<<front->val<<' ';
            if(q->left) q.push(q->left);
            if(q->right) q.push(q->right);
        }
        cout<<endl;
    }
}
