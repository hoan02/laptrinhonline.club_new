#include"stdio.h"
int main()
{
int n,i;
scanf("%d",&n);
int x[n+1],y[n+1];
for(i=0;i<n;i++)
{
 scanf("%d",&x[i]);
}
for(i=0;i<n;i++)
{
 scanf("%d",&y[i]);
}
for(i=0;i<n;i++)
{
 printf("%d\n",x[i]+y[i]);
}
}