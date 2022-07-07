#include<stdio.h>
#include<math.h>
int main ()
{
 int m ,i = 1;
 int dem = 0;
 int a =1;
 do{
  scanf("%d",&m);
 }while(m<=0);
 do{
  a = a+i;
  i++;
  m = m - a;
  dem ++;
 }while (m>=0);
 if(dem==1)
 printf("%d",dem);
 else 
 printf("%d",dem -1);
 return 0;
}