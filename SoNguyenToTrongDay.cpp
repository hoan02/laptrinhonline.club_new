#include<stdio.h>
#include<math.h>

int main(){
 int n , i , a[n] ;
 scanf("%d", &n ) ;
 for(i=1 ; i<=n ; i++){
  scanf("%d", &a[i] ) ;
 }
 int d ;
 for(i=1 ; i<=n ; i++){
  d = 0 ;
  for(int j=1 ; j<=a[i]; j++){
   if(a[i]%j==0 && j!=1 && j!=a[i] ) {
    d++ ;
   }
  }
  if(a[i]%1==0 && a[i]%a[i]==0 && a[i]!=1 && d==0){
   printf("%d ", a[i] ) ;
  }
 }
}