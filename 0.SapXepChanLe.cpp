#include <stdio.h>
int main()
{
int a[2005],a1[2005],j=0; 
int n,i;
do{
scanf("%d",&n);
}while(n>2000);
int kt[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
if(a[i]%2!=0)  
{
a1[j]=a[i];
j++;
}
for(i=n-1;i>=0;i--) 
if(a[i]%2==0)
{
a1[j]=a[i]; 
j++;
}
for(j=0;j<n;j++) 
a[j]=a1[j];
for(i=0;i<n;i++)
printf("%d ",a[i]);
}