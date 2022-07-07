#include <stdio.h>
#include <math.h>

int main(){
 int n;
 scanf("%d",&n);
 int h[n],m[n];
 for(int i=0;i<n;i++){
  scanf("%d%d",&h[i],&m[i]);
 }
 int dem[24][60]={0};
 for(int i =0;i<n;i++){
  dem[h[i]][m[i]]++;
 }
 int max=0;
 for(int i =0;i<24;i++){
  for(int j=0;j<60;j++){
   if(max<dem[i][j]){
    max=dem[i][j];
   }
  }
 }
 printf("%d",max);
}