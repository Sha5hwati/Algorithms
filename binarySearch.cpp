/*
Stopping condition is when start > end
Good for finding a specific value
*/
int binarySearchI(vector<int> &arr, int target){
    int start = 0, end = arr.size()-1;
    while(start <= end){
        int mid = start+(end-start)/2;
        if(arr[mid] == target) return mid;
        if(arr[mid] < target) start = mid-1;
        else end = mid+1;
    }
    return -1;
}

/*
The stopping condition is when start and end are
right next to each other.
       1  2  3  4
          |  |
       start end
       
Depending on what we want to return (start/end) we
initialize start and end;
return start, then start = 0, end = arr.size()
return end, then start= -1, end = arr.size()-1

Good for finding values based on the condition
on the neighbour.
*/
int binarySearchII(vector<int> &arr, int target){
    int start = 0, end = arr.size();
    while(start+1 < end){
        int mid = start+(end-start)/2;
        if(arr[mid] <= target) start = mid;
        else end = mid;
    }
    return start;
}
