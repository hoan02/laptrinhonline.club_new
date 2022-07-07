#include <bits/stdc++.h>
using namespace std;
struct cmp{
  bool operator() (int a, int b) {
   return a <b;
  }
};
map <int,int,cmp> m;
map <int,int,cmp> :: iterator it;
int main()
{
 int n,t; scanf("%d",&n);
 for (int i=1; i<=n; i++)
 {
  scanf("%d",&t);
  m[t]++;
 }
 for (it=m.begin(); it!=m.end(); it++)
  printf("%d %d\n",it->first, it->second);
 
}