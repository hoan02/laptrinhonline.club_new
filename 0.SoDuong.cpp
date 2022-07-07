#include<stdio.h>
int main(){
 int c=0;
 float a[6];
 for(int i=0;i<6;i++){
  scanf("%f",&a[i]);
 }
 for(int i=0;i<6;i++){
  if(a[i]>0) c++;
 }
 printf("%d so duong",c);
}