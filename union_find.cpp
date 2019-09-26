/*
Union-Find

Used to find connected componenets
*/


/*
Initially parents are its own component of size 1
hence the parents are initialized to -1
where negative means that the node is the parent
and the value is the size of the component
*/
vector<int> parent;

/*
Find is used to find the parent of connect
component it belongs to
*/
int find(int x){
    if(parent[x] < 0) return x;
    parent[x] = find(parent[x]);
    return parent[x];
}   

/*
Merge is used to put the two given nodes into
the same component
*/
void merge(int x, int y){
    x = find(x);
    y = find(y);
    if(x == y) return;
    
    if(-parent[x] < -parent[y])
        swap(x, y);
        
    parent[x] += parent[y];
    parent[y] = x;
}

