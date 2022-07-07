#include<stdio.h>


void nhap(int a[][101], int m, int n){
 int i,j;
 for(int i = 0; i < m; i++ )
  for(j= 0; j<n; j++)
   scanf("%d",&a[i][j]);
}

void nhanMT(int a[][101], int b[][101], int m, int n, int p)
{
 int c[101][101];
 int i,j,k;
 for(i = 0; i < m; i++)
  for(j =0; j < n; j++)
   for(k = 0; k < p; k++)
    c[i][k] +=  a[i][j]*b[j][k];
 for(i = 0; i < m; i++)
 {
  for(j = 0; j < p; j++)
  {
   printf("%-10d",c[i][j]);
  }
  printf("\n");
 }
}
int main(){
 int m,n,p;
 scanf("%d%d%d",&m,&n,&p);
 int a[101][101],b[101][101];
 nhap(a,m,n);
 nhap(b,n,p);
 nhanMT(a,b,m,n,p);
 return 0;
}