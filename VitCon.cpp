#include<stdio.h>
int main()
{
 unsigned long long a;
 do{
  scanf("%llu",&a);
  if(a==0)
  printf("0\n");
  else if(a!=0&&a!=-1)
  printf("%llu\n",a-1);
 }while(a!=-1);
}