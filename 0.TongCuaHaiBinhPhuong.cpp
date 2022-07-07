#include<stdio.h>
main(){
 int x, i, j, check;
 while(scanf("%d", &x) != EOF){
//  if(x<-10000 || x>10000){
//   printf("Duma\n");
//   continue;
//  }printf("%d\n", x);
  check=0;
  for(i=0; i*i<=x; i++){
   for(j=0; j*j<=x; j++){
    if(i*i+j*j == x){
     check=1;
     break;
    }
   }
   if(check==1)
    break;
  }
  if(check==1)
   printf("Co\n");
  else
   printf("Khong\n");
 }
}