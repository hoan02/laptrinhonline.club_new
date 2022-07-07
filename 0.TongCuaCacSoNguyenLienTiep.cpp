#include<stdio.h>
int main() 
{ 
    int a,b,s=0; 
    scanf("%d",&a);
    do { scanf("%d",&b);
          if(b>0){

         break;
     }
}while(b<=0);


for(int i=a;i<a+b;i++)
{
    s = s+i;
}
printf("%d",s);
}