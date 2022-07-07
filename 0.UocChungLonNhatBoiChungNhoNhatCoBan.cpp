#include<stdio.h>
main(){
 //khai bao dau vao
/* int n;
 scanf("%d",&n);
 int num[n];
 for(int i=0;i<n;i++){
  scanf("%d",&num[i]);
 }
*/
 //lam bai
 int num1,num2;
 int ucln=1,bcnn;
 do{
  scanf("%d%d",&num1,&num2);
  if(num1!=0&&num2!=0){
   int x=num1,y=num2;
   for(;ucln!=0;){
    ucln=y%x;
    y=x;
    x=ucln;
   }
   ucln=y;
   bcnn=num1/ucln*num2;
   printf("%d %d\n",ucln,bcnn);
  }
 } while (num1!=0&&num2!=0);
 
}