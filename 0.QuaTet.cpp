#include<stdio.h>

void nhap(int *n, int *m, int a[])
{
 scanf("%d %d",n,m);
 for(int i=1;i<=*m;i++)
 {
  scanf("%d",&a[i]);
 }
}

void doicho(int *a, int *b)
{
 int c=*a;
  *a=*b;
  *b=c;
}

void GTNN(int n,int m, int a[])
{
 for(int i=1;i<=m;i++)
 {
  for(int j=i+1;j<=m;j++)
  {
   if(a[j]<a[i])
   {
    doicho(&a[j],&a[i]); 
   } 
  }

 }
 int min=a[n]-a[1];
 for(int i=2;i<=m;i++)
 if(i+n-1>m) break;
 else
 { 
 if(a[i+n-1]-a[i]<min)
 min=a[i+n-1]-a[i]; 
 }printf("%d",min); 
}

int main()
{
 int a[100],m,n;
 nhap(&n,&m,a);
 GTNN(n,m,a);
}