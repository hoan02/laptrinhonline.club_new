using namespace std;
#include<bits/stdc++.h>
#define ll long long

const int N = 30;

struct Node {
 ll value;
 Node *child[2] = { 0, 0 };
};

Node *root = new Node;

void add(ll x){
 Node *cur = root;
 for(int i = N; i >= 0; --i){
  int id = (x & (1L << i)) ? 1 : 0;
  if(cur -> child[id] == 0) cur -> child[id] = new Node;
  cur = cur -> child[id];
 }
 cur -> value = x;
}

ll get(ll x){
 Node *cur = root;
 for(int i = N; i >= 0; --i){
  int id = (x & (1L << i)) ? 1 : 0;
  if(cur -> child[1 - id] != 0) cur = cur -> child[1 - id];
  else cur = cur -> child[id];
 }
 return x ^ cur -> value;
}

int main(){
    ios::sync_with_stdio(0);
 cin.tie(0);
    //freopen("in.txt", "r", stdin);
 ll n, x; cin >> n;
 for(int i = 0; i < n; ++i) cin >> x, add(x);
 int m; cin >> m;
 while(m--){
  cin >> x;
  cout << get(x) << '\n';
 }
    return 0;
}