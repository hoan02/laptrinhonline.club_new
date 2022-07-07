#include<bits/stdc++.h>
using namespace std;

int a[1000006];
int check(int x){
 int f[10]={};
 while(x){
  int n=x%10;
  x /= 10;
  f[n]++;
  if(f[n]==2) return 0;
 }
 return 1;
}

void setMap(){
 for(int i=0;i<1000006;i++){
  a[i] = check(i);
 }
 partial_sum(a, a+1000006, a);
}

int main(){
 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 setMap();
 int t;
 cin >> t;
 while(t--){
  int l, r;
  cin >> l >> r;
  cout << a[r] -a[l-1] << "\n"; 
 }
 return 0;
}