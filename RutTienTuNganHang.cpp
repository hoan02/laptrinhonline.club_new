#include <stdio.h>

int main() {
 int m,n;
 
 scanf("%d%d",&m,&n);
 
 int tien[n];
 for(int i=0;i<n;i++){
     scanf("%d",&tien[i]);
 }
 
 long long list[m+1]={0};
 list[0]=1;
 for(int i=0;i<n;i++){
     for(int j=tien[i];j<=m;j++){
         list[j]+=list[j-tien[i]];
     }
 }
 printf("%lld",list[m]);
 
    return 0;
}