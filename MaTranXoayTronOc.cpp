#include<stdio.h>
#include<math.h>
int main()
{
 int i,j,n,hh[]={0,1,0,-1},hc[]={1,0,-1,0},a[202][202];
 scanf("%d",&n);
 for(i=0;i<=n+1;i++)
 for(j=0;j<=n+1;j++)
 a[i][j]=i==0||i==n+1||j==0||j==n+1?1:0;
 int u=1,v=0,h=0,u1,v1;
 for(int k=1;k<=n*n;k++)
 {
  int t;
  for(t=0;t<4;t++)
  {
   u1=u+hh[(h+t)%4];
   v1=v+hc[(h+t)%4];
   if(a[u1][v1]==0)
   {
    h=(h+t)%4;
    u=u1;
    v=v1;
    a[u][v]=k;
    break;
   }
  }
 }
 for(int i=1;i<=n;i++)
 {
  for(int j=1;j<=n;j++)
  printf("%d\t",a[i][j]);
  printf("\n");
 }
}