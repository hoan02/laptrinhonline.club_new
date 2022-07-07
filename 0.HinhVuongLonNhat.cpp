#include <stdio.h>
#include <math.h>
#include <string.h>
#include <algorithm>

int min(int a, int b, int c)
{
 int t=a<b?a:b;
 return t<c?t:c;
}
int main(){
 
 int m, n, d;
 scanf("%d%d", &m, &n);
 int a[1005][1005], c[1005][1005];
 for(int i=0; i<m ; i++)
 {
  for(int j=0; j<n; j++)
  {
   scanf("%d", &a[i][j]);
   c[i][j]=a[i][j];
  }
 }
 
 int max=a[0][0]; 
 for(int i=1; i<m; i++)
 {
     for(int j=1; j<n; j++)
     {
      if(a[i][j]>0) 
      {
          c[i][j] = min(c[i][j-1], c[i-1][j], c[i-1][j-1])+1;
         }
    if(c[i][j]>max)
      {
       max=c[i][j];
   }
     } 
 } 
 for(int i=0; i<m ; i++)
 {
  for(int j=0; j<n; j++)
  {
   a[i][j]=1-a[i][j];
   c[i][j]=a[i][j];
  }
 }
 for(int i=1; i<m; i++)
 {
     for(int j=1; j<n; j++)
     {
      if(a[i][j]>0) 
      {
          c[i][j] = min(c[i][j-1], c[i-1][j], c[i-1][j-1])+1;
         }
    if(c[i][j]>max)
      {
       max=c[i][j];
   }
     } 
 } 
  printf("%d", max);
  return 0;
}