#include<stdio.h>
#include<math.h>
int main(){
 int x , y ,i;
 int tong = 0;
 scanf("%d%d", &x ,&y);
 if(x<y)
  for(i=x;i<=y;i++){
  
  if(i%13!=0)
   tong=tong+i;
  }
 else 
  for(i=y;i<=x;i++){
  
  if(i%13!=0)
   tong=tong+i;
  }
 printf("%d", tong);
}