#include"stdio.h"
#include<string.h>

int main(){
 int  n,i,j;
 float a[12][12],s=0;
 char x;
 scanf("%d",&n);
 scanf("\n%c",&x);
    for (i = 0; i < 12; i++)
 {
     for (j = 0; j < 12; j++) 
     {
      scanf("%f",&a[i][j]);
  }
    }
 for (j = 0; j < 12; j++)
 {
  s += a[n][j];
 }
 if(x=='S')
     printf("%0.1f",s);
 else 
     printf("%0.1f",s/12);
}