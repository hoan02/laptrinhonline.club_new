#include <bits/stdc++.h>
using namespace std;
long long x[100000],y[100000];
main(){
 int n;
 cin>>n;
 unsigned long long res=0;
 unsigned long long nhox=0, nhoy=0;
 for(long long i=0;i<n;i++){
  cin>>x[i]>>y[i];
  nhox += x[i];
  nhoy += y[i];
 }
 for(long long i=0;i<n;i++){
  nhox -= x[i];
  nhoy -= y[i];
  res+=(n-1)*(x[i]*x[i]+y[i]*y[i]);
  res -= 2*x[i]*nhox;
  res -= 2*y[i]*nhoy;
 }
 cout<<res;
}