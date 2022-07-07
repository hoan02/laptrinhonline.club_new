#include<stdio.h>
int main()
{
 int count =0;
 int a[1000];
 for(int i=0; i<5; i++)
  scanf("%d", &a[i]);
 for(int i=0; i<5; i++)
 {
  if(a[i]%2==0)
  count++;
 }
 printf("%d Gia tri", count);
 return 0;
}