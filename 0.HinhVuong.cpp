#include<stdio.h>
int main(){
 int kv, i=0, a;
 do{
     scanf("%d", &kv);
 }while(kv < 0);
 for(a=1; a<kv; a++)
  if(a*a <= kv)
      i++;
 printf("%d", i);
}