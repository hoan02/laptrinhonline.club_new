#include<bits/stdc++.h>
using namespace std;

int hoiTruong(){
    int n; 
 cin >> n;
 pair<int,int> A[n];
 for(auto &x:A) cin >> x.second >> x.first;
 sort(A,A+n);
    int x=-INT_MAX, y=-INT_MAX, res=0;
 for(auto a:A){
  if(x<y) swap(x, y);
        if(a.second>x) {res++; x=a.first;}
        else if(a.second>y) {res++; y=a.first;}
 }
    return res;
}

int main(){
  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin >> t;
    while(t--){
        cout << hoiTruong() << "\n";
    }
 return 0;
}