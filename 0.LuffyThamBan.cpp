#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int c (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
main() {
 int n;
 scanf("%d",&n);
 long a[n+100],cb,tong=0;
 for (int i=1;i<=n;i++) 
  scanf("%ld",&a[i]);
 a[0]=-1; 
 qsort(a,n+1,sizeof(long),c);
 if (n%2==0) 
  cb = a[n/2];
 else 
  cb = a[(n+1)/2]; 
 for (int i=1;i<=n;i++) 
  tong = tong + fabs(a[i]-cb);
 printf("%ld",tong); 
}