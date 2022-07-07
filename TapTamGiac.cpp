#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,res=0;
 scanf("%d",&n);
 int a[n+5];
 for(int i=1;i<=n;i++) scanf("%d",&a[i]);
 sort(a+1,a+n+1); a[n+1]=INT_MAX;
 int p=1;
 for(int i=1;i<=n;i++)
 {
  while(a[i]+a[i+1]>a[p]) p++;
  if(res<p-i) res=p-i;
 }
 if(res<3) printf("Khong the tao ra day thoa man");
 else printf("%d",res); 
}