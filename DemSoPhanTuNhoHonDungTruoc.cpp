#include<bits/stdc++.h>
using namespace std;
 
template <typename T>
class Fenwick {
public:
 vector<T> F;
 int n;
 Fenwick(int _n) : n(_n) {
  F.resize(n);
 }
 
 void update(int id, T val){
        while(id <= n){
            F[id] += val;
            id += (id & (-id));
        }
    }
 
 T getSum(int id) {
        T ans = 0;
        while(id > 0) {
            ans += F[id];
            id -= (id & (-id));
        }
        return ans;
    }
};

const int MAX = 1e5;
 
int main() {
 ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 int n; cin >> n;
 Fenwick<int> Fw(3*MAX);
    for(int i=0;i<n;i++){
     int x; cin >> x;
     x+=2*MAX;
     cout << Fw.getSum(x-1) << " ";
     Fw.update(x, 1);
 }
    return 0;
}