/*
Priority Queues
Heaps

Properties:
- Max heap
    root node contains the largest element
    children are less than or equal to root
- Min heap
    root node contains the smallest element
    children are greater than or equal to root
- Complete binary tree

Inserting into a heap
- Insert to the right-most free spot
- bubble up until root property is satifies

Removing from a heap
- set the top value to the smallest value
- bubble down until the root property is unsatisfies

Implementing the heap
parent = (curr-1)/2
left = curr*2 +1
right = curr*2 +2

Runtimes:
Reading top: O(1)
Inserting: O(log n)
Deleting: O(log n)
Creating: O(n)
*/


vector<int> max_heap;

// inserting into a max heap
// and bubbling up
void insert(int val){
    max_heap.push_back(val);
    bubble_up();
}

void bubble_up(){
    int curr = max_heap.size()-1;
    int par_idx = (curr-1)/2;
    while(idx >= 0 && max_heap[par_idx] < max_heap[curr]){
        int temp = max_heap[idx];
        max_heap[idx] = max_heap[curr];
        max_heap[curr] = temp;
        
        curr = idx;
        idx = (curr-1)/2;
    }
}

// deleting from a heap
// and bubbling down
void delete(){
    max_heap[0] = max_heap.back();
    max_heap.pop_back();
    bubble_down();
}

void bubble_down(){
    int curr = 0;
    int left = 2*curr+1;
    int right = 2*curr+2;
    while(left < max_heap.size() || right < max_heap.size()){
        if(left >= max_heap.size()){
            if(max_heap[right] > max_heap[curr]){
                int temp = max_heap[right];
                max_heap[right] = max_heap[curr];
                max_heap[curr] = temp;
                
                curr = right;
                right = 2*curr+2;
                continue;
            }
        } else if(right >= max_heap.size()){
            if(max_heap[left] > max_heap[curr]){
                int temp = max_heap[left];
                max_heap[left] = max_heap[curr];
                max_heap[curr] = temp;
                
                curr = left;
                left = 2*curr+1;
                continue;
            }
        } else {
            
            int next = -1;
            if(max_heap[left] >= max_heap[right]) next = left;
            else next = right;
            
            if(max_heap[next] > max_heap[curr]){
                int temp = max_heap[curr];
                max_heap[curr] = max_heap[next];
                max_heap[next] = temp;
                
                curr = next;
                left = 2*curr+1;
                right = 2*curr+2;
            } else break;
        }
    }
}


