#include<bits/stdc++.h>

#define ull unsigned long long
#define ll long long
#define fi first
#define se second

using namespace std;
int cnt=0;
int main(){
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
 int m,n;
 cin>>n>>m;
 if(n>=m)
  cout<<n-m;
 else{
  int cnt=0;
  while(m>n){
   if(m%2==0)
    while(m%2==0){
     m/=2;
     cnt++;
     if(m<=n)
      break;
    }
   else{
    cnt++;
    m++;
    while(m%2==0){
     m/=2;
     cnt++;
     if(m<=n)
      break;
    }
   }
     
  }
  cout<<cnt+n-m;
 }
   
   
   
   
   
   
   
}