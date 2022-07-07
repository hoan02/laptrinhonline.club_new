#include<stdio.h>
#include<math.h>
 
 int main(){
  
  float a, b, c;
  scanf("%f%f%f",&a,&b,&c);
  
  if(a+b>c&&a+c>b&&b+c>a)
  {
   if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
    {printf("TAM GIAC VUONG");}
   else
   {
    if(a*a+b*b>c*c&&a*a+c*c>b*b&&b*b+c*c>a*a)
    {
     printf("TAM GIAC NHON");
    }
    else
    {
     printf("TAM GIAC TU");
    }
   }
  }
  else
  {
   printf("KHONG PHAI TAM GIAC");
  }
  
  if(a+b>c&&a+c>b&&b+c>a)
  {
   if(a==b&&b==c)
   {
    printf("\nTAM GIAC DEU");
   }
   else
   {
    if((a==b&&b!=c)||(b==c&&a!=c)||(a==c&&a!=b))
    {
     printf("\nTAM GIAC CAN");
    }
   } 
  }
  
  return 0;
  
 }