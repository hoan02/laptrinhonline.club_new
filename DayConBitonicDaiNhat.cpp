#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 long n,a[1000000]={-9999999};
 long dem=0,kt=0,max=0,demb=1;
 cin>>n;
 for(long i=0;i<n;i++){
  cin>>a[i];
  if(kt==0){  
   if(a[i]>=a[i-1]){
    dem++;
   }
   else
    kt=1;
  }
  if(kt==1){
   if(a[i]<=a[i-1]){
    dem++;
    if(a[i]==a[i-1]) demb++;
    else demb=1;
   }
   else{
    kt=0;
    max=max>dem?max:dem;
    dem=1+demb;
   }
  }
 }
 max=max>dem?max:dem;
 cout<<max;
}