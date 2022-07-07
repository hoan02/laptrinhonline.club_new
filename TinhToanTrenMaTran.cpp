#include<stdio.h>
int main() {
int i,j,n,m; 
int a[100][100];
  scanf("%d%d",&n,&m);
  for(i=0;i<n;i++)
    {
     for(j=0;j<m;j++)
  {
   scanf("%d",&a[i][j]); 
   } 
 }
  for(i=0;i<n;i++)
    {
      int s=0 ;
     for(j=0;j<m;j++)
  {  
   s= s+a[i][j];
   } 
      printf("%d ",s); 
 }
 printf("\n"); 
  for(j=0;j<m;j++)
    {   
      int  max=0;   
     for(i=0;i<n;i++)
  {  
          
   if (max<a[i][j])
   max=a[i][j]; 
   } 
      printf("%d ",max); 
 }
  printf("\n");
  float tong=0;
  int dem=0; 
  for(i=1;i<n;i=i+2)
    {
     for(j=0;j<m;j=j+2)
  { 
      if(a[i][j]%3==0)
   {
     tong =tong + a[i][j];
           dem++; 
    }   
   }      
 }
 if(dem>0)
 {
  printf("%0.3f",1.0*tong/dem); 
  } 
  if(dem==0)
  {
   printf("khong co so thoa man") ;
   } 
   }