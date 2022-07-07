#include<stdio.h>
int main(){
 int n;
 int a[100];
 int demtrong=0;
 int demngoai=0;
 scanf("%d",&n);
 int i;
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 if(a[i]>=10&&a[i]<=20)
 demtrong++;
 else
 demngoai++;
 printf("%d trong",demtrong);
 printf("\n");
 printf("%d ngoai",demngoai);
 return 0;
}