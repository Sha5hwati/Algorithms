/*
BFS
Explore all the nodes in the current
level before exploring the neighbours

Used to find the shortest path between
two nodes

We can have multiple start points in the
queue

Time complexity: O(E+V) E: edges V: vertices
Space complexity: O(E+V)
*/

void bfs(vector<vector<int>> &graph, int node, vector<bool> &visited){
    queue<int> q;
    q.push(node);
    
    while(!q.empty()){
        int currNode = q.front();
        q.pop();
        
        visited[currNode] = true;
        for(int &adj: graph[currNode])
            if(!visited[adj])
                q.push(adj);
    }
}


//Shortest path from node to all other nodes
//distance acts like visited
void shortestPath(vector<vector<int>> &graph, int node, vector<int> &dist){
    queue<pair<int, int>> q;
    q.push({node, 0});
    
    while(!q.empty()){
        auto curr = q.front();
        q.pop();
        
        dis[curr.first] = curr.second;
        for(int &adj: graph[curr.first])
            if(dist[adj] > curr.second+1)
                q.push({adj, curr.second+1});
    }
}

