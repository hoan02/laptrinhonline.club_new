#include<stdio.h>
#include<string.h>
int main(){
 char a[509];
 int d=0,i=0;
 gets(a);
 while(a[i]!='\0'){
  d++;
  i++;
 }
 if(d<=30) 
  printf("CO");
 else
  printf("KHONG");
}