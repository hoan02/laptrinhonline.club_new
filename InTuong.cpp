#include <bits/stdc++.h>
#include <cstdio>
#define For(i,a,b) for(int i = a; i <= b; i++)
#include<math.h>
using namespace std;
 
int main(){
 //std::ios_base::sync_with_stdio(false);
 int n;
 cin >> n;
 if(n==1) cout<<1;
 else{
  int i = 1;
  int s = 2;
  while(s<=n/2){
   s*=2;
   i++;
  }
  i--;
  s/=2;
  if(s*2<n){
   cout<<i+3;
  }
  else{
   cout<<i+2;
  }
 }
}