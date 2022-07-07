#include<stdio.h>
int main()
{
 int i,j,s,n,a[10000],b[10000],tg1,tg2,d=0;
 scanf("%d%d",&s,&n);
 for(i=0;i<n;i++)
 scanf("%d%d",&a[i],&b[i]);
 for(i=0;i<n-1;i++)
  for(j=i+1;j<n;j++)
   if(a[i]>a[j])
   {
    tg1=a[i];
    a[i]=a[j];
    a[j]=tg1;
    tg2=b[i];
    b[i]=b[j];
    b[j]=tg2;
   }
 
 for(i=0;i<n;i++)
 {
  if(s<=a[i])
  {
   printf("NO");
   break;
  }
  else
  {
   s+=b[i];
   d++;
  }
 } 
 if(d==n) printf("YES");  
}