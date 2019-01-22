#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
#define EPS 0.000001
#define INF 300000000000
struct point{
   long double x, y;
};

long double dis(point p1, point p2){
    return sqrtl(powl(p1.x-p2.x, 2) + powl(p1.y - p2.y, 2));
}

bool cmp(point a, point b){
    if(a.x == b.x)
        return a.y < b.y;
    return a.x < b.x;
}

bool cmp2(point a, point b){
    if(a.y == b.y)
        return a.x < b.x;
    return a.y < b.y;
}

struct closest {
    point p1, p2;
    long double d = INF;
};


closest closestPair(vector<point> v, int n, long double split){
    if(n==2){
        closest c;
        c.p1 = v[0];
        c.p2 = v[1];
        c.d = dis(v[0], v[1]);
        return c;
    }
    
    if(n==3){
        closest c;
        c.d = INF;
        for(int i=0; i<3; i++){
            for(int j=i+1; j<3; j++){
                long double d = dis(v[i], v[j]);
                if(d + EPS < c.d){
                    c.p1 = v[i];
                    c.p2 = v[j];
                    c.d = d;
                }
            }
        }
        return c;
    }
    
    vector<point> left;
    for(int i=0; i<n/2; i++){
         left.push_back(v[i]);
     }
    
    vector<point> right;
    for(int i=n/2; i<n; i++){
        right.push_back(v[i]);
    }
    
    closest dl = closestPair(left, left.size(), left[left.size()/2].x);
    closest dr = closestPair(right, right.size(), right[right.size()/2].x);
    
    closest f; f.d = INF;
    if(dl.d + EPS < dr.d) {
        f = dl;
    } else {
        f = dr;
    }
    
    vector<point> vy;
    for(int i=0; i<n; i++){
        if(abs(split - v[i].x) + EPS <= f.d)
            vy.push_back(v[i]);
    }
    
    sort(vy.begin(), vy.end(), cmp2);
    
    for(int i=0; i<vy.size(); i++){
        for(int j=i+1; j<vy.size(); j++){
            long double curr = dis(vy[i], vy[j]);
            if( curr + EPS < f.d){
                f.p1 = vy[i];
                f.p2 = vy[j];
                f.d = curr;
            }
            if(abs(vy[i].y - vy[j].y) > f.d + EPS){
                break;
            }
        }
    }
    
    return f;
}
