/*
DFS
start at a node and
explore all the nodes below it
before explore a node next to it

Used to find cycles

Time complexity: O(E+V) E: Edge V: Vertices
Space complexity: O(E+V)
*/

//Recursive
void dfs(vector<vector<int>> &graph, int node, vector<bool> &visited){
    visited[node] = true;
    for(int &adj: graph[node]){
        if(!visited[adj])
            dfs(graph, adj, visited);
    }
}

//Iterative
void dfs(vector<vector<int>> &graph, int node, vector<bool> &visited){
    stack<int> stk;
    stk.push(node);
    while(!stk.empty()){
        int currNode = stk.top();
        stk.pop();
        
        visited[node] = true;
        for(int &adj : graph[currNode])
            if(!visited[adj])
                stk.push(adj);
    }
}
