/*
Topological sort
Linear ordering of nodes in a directed graph

Requirement: Directed Acyclic Graph (DAG)

Topo sort property:
In a DAG, for every edge uv from vertex u
to vectex v, u comes before v in the ordering

Modification of DFS:
Adding the node only after the children are visited
*/


void topologicalSort(vector<vector<int>> &graph, int node, vector<bool> &visited, vector<int> &sort){
    visited[node] = true;
    for(int &adj: graph)
        if(!visited[adj])
            dfs(graph, adj, visited, ans);
    sort.push_back(adj);
}


//Check if a graph has a cycle
//For a topological sort the graph has to be a DAG
bool isCyclic(vector<vector<int>> &graph, int node, vector<bool> &visited, vector<int> &seen){
    visited[node] = true;
    seen[node] = true;
    for(int &adj: graph[node]){
        //node != adj incase of self cycles
        if(seen[adj] && node != adj) return true;
        if(!visited[adj] && isCyclic(graph, adj, visited, seen))
            return true;
    }
    seen[node] = false;
    return false;
}
