#include<iostream>
using namespace std;
int main(){
 long long a[42][42],i,j,n;
 cin>>n;
 a[0][0]=1;
 for (i=1;i<=n+1;i++)
  for (j=1;j<=i;j++){
   a[i][j]=a[i-1][j]+a[i-1][j-1];
   if (j==1 || j==i) a[i][j]=1;
  }
 for (i=1;i<=n+1;i++){
  for(j=1;j<=i;j++)
   cout<<a[i][j]<<" ";
  cout<<endl;
 }
}