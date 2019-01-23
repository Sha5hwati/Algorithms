#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

vector<ll> LSIS(vector<ll> &arr){
    vector<ll> longest(arr.size(), 0);
    multiset<ll> seq;
    map<int, int> mp;
    for(int i=0; i<arr.size(); i++){
        seq.insert(arr[i]);
        auto it = seq.lower_bound(arr[i]);
        
        if(it == seq.begin()) mp[i] = -1;
        else {auto itd = it; itd--; mp[i] = *itd;}
        
        it++;
        if(it!=seq.end()) seq.erase(it);
        longest[i] = seq.size();
    }
        
    vector<ll> result;
    int end = *seq.rbegin();
    
    for(int i=arr.size()-1; i >= 0; i--){
        if(arr[i] == end){
            result.push_back(arr[i]);
            end = mp[i];
        }
    }
    
    return result;
}
