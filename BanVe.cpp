#include <bits/stdc++.h>
using namespace std;

int main()
{
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;   cin>>n; 
    int x;
    int tiendc=0,tienk;
    while(n--){
     cin>>x;
     if(x==25){
      tiendc+=25;
  }
  else{
   if(tiendc<x-25){
    cout<<"NO";
    return 0;
   }
   else tiendc-=x-25;
  }
 }
 cout<<"YES";
    
}