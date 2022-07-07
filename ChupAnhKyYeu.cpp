#include <iostream>
using namespace std;

int a[100001];
void HoanVi(int &a,int &b){
 int t=b;
 b=a;a=t;
}

void qs(int l,int r){
 int i=l,j=r, t= (l+r)/2;
 int key = a[t];
 while(i<=j){
  while(a[i]<key) i++;
  while(a[j]>key) j--;
  if(i<=j){
   HoanVi(a[i],a[j]);
   i++;
   j--;
  }
}
 if(l<j) qs(l,j);
 if(i<r) qs(i,r);
}
int main(){
 int n,k, i, j, tong=1;
 cin >> n;
 cin>>k;
 for(i=1;i<=n;i++){
  cin >> a[i];
 }
 qs(1,n);

 for(i=1;i<n;i++){
  if(a[i+1]-a[i]>k)tong++;
 }

 cout<<tong;
}