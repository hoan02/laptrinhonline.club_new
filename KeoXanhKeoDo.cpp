#include<stdio.h>
#include<math.h>
int main()
{
 int i,n;
 long long r[1000],b[1000],d[1000];
 scanf("%d",&n);
 for(i=0;i<n;i++)
  scanf("%lld%lld%lld",&r[i],&b[i],&d[i]);
 for(i=0;i<n;i++)
 {
  if(r[i]<b[i])
  {
   if(b[i]<=r[i]*(d[i]+1))
    printf("YES\n");
   else
    printf("NO\n");
     }
  else
  {
   if(r[i]<=b[i]*(d[i]+1))
    printf("YES\n");
   else
    printf("NO\n");
  }
 }
}