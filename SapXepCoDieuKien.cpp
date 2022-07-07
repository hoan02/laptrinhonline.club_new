#include <stdio.h>
#include <math.h>

int comparator (const void * p1, const void * p2)
{
  return (*(int*)p1 - *(int*)p2);
}

int main(){

 //input
 int n;
 scanf("%d",&n);
 int num[n];
 for (int i = 0; i < n; i++) {
  scanf("%d",&num[i]);
  
 }

 //sort
 qsort(num,n,sizeof(int),comparator);
 
 //lam
 for (int i = 0; i < 3; i++){
  for (int j = 0; j < n; j++) {
   if(num[j]%3==i){
    printf("%d ",num[j]);
   }
  }
 }
}