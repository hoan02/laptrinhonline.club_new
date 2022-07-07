#include<bits/stdc++.h>

using namespace std;

struct Edge{
 int d,c,ts;
};

int P[10005] = {};

int goc(int u){
 return P[u]==0?u:goc(P[u]); 
}

int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);

 int n,m;
 cin >> n >> m;
 Edge A[m];
 for(Edge &e:A) cin >> e.d >> e.c >> e.ts;
 sort(A,A+m,[] (Edge u, Edge v) {return u.ts<v.ts;});
 long long res = 0;
 for(auto e:A){
  int u = goc(e.d), v = goc(e.c);
  if(u!=v){
   P[u] = v;
   P[e.d] = v;
   if(e.c!=v) P[e.c] = v;
   res+= e.ts;
  }
 }
 cout << res;
 return 0;
}