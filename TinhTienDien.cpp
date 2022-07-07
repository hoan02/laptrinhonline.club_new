#include<stdio.h>
#include<math.h>
main(){
 int n,i,dem=0;
 do{
  scanf("%d",&n);
 }while(n<0 || n>1000);
 float dvi[]={1.0,1.2,1.7,2.2};
 int sodien[]={100,150,250,500};
 float tong;
 for(i=0;i<4;i++){
  if(n>sodien[i]){
   n-=sodien[i];
   dem++;
  }
 }
 if(dem==0){
  tong=n*dvi[0];
  printf("\n%.3f",tong);
 }
 else{ 
  for(i=0;i<dem;i++){
   tong+=dvi[i]*sodien[i];
  }
 printf("\n%.3f",tong+n*dvi[dem]);
 }
}