#include<stdio.h>
#include<stdlib.h>
/*int cmpfunc(const void *a,const void *b){
 return (*(int *)a-*(int *)b);
}*/
void thucthi(long a[],long left,long right){
 for (int i=right;i>=left;i--){
      printf("%ld ",a[i]); 
 }
} 
int main(){
 long n,k;
 scanf("%ld%ld",&n,&k);
 long a[2*n+1];
 for (int i=0;i<n;i++){
  scanf("%ld",&a[i]);
 }
 //qsort(a,k,sizeof(long),cmpfunc);
 for (int i=0;i<n;){
  if (i+k<=n){
  thucthi(a,i,i+k-1);
  i+=k;
  }
  else {for(int j=n-1;j>=i;j--){
   printf("%ld ",a[j]);
  } 
  break;
  }
 }
}