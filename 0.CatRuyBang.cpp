#include<bits/stdc++.h>

using namespace std;

int main(){
 int n,a,b,c;
 cin>>n>>a>>b>>c;
 int x[4001];
 for(int i=0;i<=4000;i++)
  x[i]=0;
 if(a>b){
  int temp=a;
  a=b;
  b=temp;
 }
 if(b>c){
  int temp=b;
  b=c;
  c=temp;
 }
 x[a]=1;
 x[b]=1;
 x[c]=1;
 for(int i=1;i<=n;i++){
  int m=0;
  if(i>c&&x[i-c]>0&&m<x[i-c]+1)
   m=x[i-c]+1;
  if(i>b&&x[i-b]>0&&m<x[i-b]+1)
   m=x[i-b]+1;
  if(i>a&&x[i-a]>0&&m<x[i-a]+1)
   m=x[i-a]+1;
  x[i]=max(m,x[i]);
 }
 cout<<x[n];
  
}