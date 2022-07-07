#include<stdio.h>

int nhonhat(int n, short k){
 if(k>n*9)
  return -1;
 if(n==1)
  return k;
 if(k>9)
  return nhonhat(n-1, k-9)*10+9;
 return nhonhat(n-1, 1)*10+k-1;
}
main(){
 short t, n, k;
 scanf("%hd", &t);
 while(t--){
  scanf("%hd %hd", &n, &k);
  printf("%d\n", nhonhat(n, k));
 }
}