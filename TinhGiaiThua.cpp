#include<stdio.h>
int demSo(long x){
 int dem=0;
 while(x>0){
  x/=10;
  dem++;
  if(dem>8)
   return 0;
 }
 return 9-dem;
}
main(){
 long n, i, tich=1;
 scanf("%ld", &n);
 for(i=2; i<=n; i++){
  tich = (tich%1000000007)*(i%1000000007)%1000000007;
 }
 int dem= demSo(tich);
 if(dem==0)
  printf("%ld", tich);
 else{
  while(dem--)
   printf("0");
  printf("%ld", tich);
 }
}