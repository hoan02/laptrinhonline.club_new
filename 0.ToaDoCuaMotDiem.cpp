#include<stdio.h>
#include<math.h>
main(){
 float a,b;
 scanf("%f%f",&a,&b);
 if(a==0&&b==0){
  printf("Origem");
 }
 if(a>0&&b==0){
  printf("Eixo X");
 }
 if(a<0&&b==0){
  printf("Eixo X");
 }
 if(a==0&&b>0){
  printf("Eixo Y");
 }
 if(a==0&&b<0){
  printf("Eixo Y");
}
if(a>0&&b<0){
 printf("Q4");
}
if(a<0&&b<0){
 printf("Q3");
}if(a<0&&b>0){
 printf("Q2");
}
if(a>0&&b>0){
 printf("Q1");
}
}