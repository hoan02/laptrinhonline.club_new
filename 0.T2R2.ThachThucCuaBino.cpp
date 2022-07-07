#include<stdio.h>
#include<math.h>

int main()
{
    int a[1000];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 int dem2=0,dem3=0,dem4=0,dem5=0;
 for (int i=0;i<n;i++)
 {
  if(a[i]%2==0)
      dem2++;
  if(a[i]%3==0)
      dem3++;
  if(a[i]%4==0)
      dem4++;
  if(a[i]%5==0)
      dem5++;
 } 
 printf("\n%d Multiplo(s) de 2\n",dem2);
 printf("\n%d Multiplo(s) de 3\n",dem3);
 printf("\n%d Multiplo(s) de 4\n",dem4);
 printf("\n%d Multiplo(s) de 5\n",dem5);
 return 0;
}