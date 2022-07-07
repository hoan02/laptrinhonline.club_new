#include <stdio.h>
int main(){
 long int n[20];
 for (int i=0; i<=19; i++){
  scanf("%ld",&n[i]);
 }
 for (int i=0; i<=19; i++)
  printf("N[%d] = %ld\n",i,n[19-i]);
 return 0;
}