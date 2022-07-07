#include<stdio.h>
typedef struct{
 char tensv[30];
 int diem;
}sinhvien;
main() {
 int i, n;
 float tong=0, tbc;
 sinhvien sv[100];
 scanf("%d", &n);
 
 for(i=0; i<n; i++){
  scanf("%s", &sv[i].tensv);
  scanf("%d", &sv[i].diem);
  tong += sv[i].diem;
 }
 tbc = (float)tong/n;
 printf("DIEM TRUNG BINH %.1f", tbc);
 for(i=0; i<n; i++){
  if(sv[i].diem >= tbc){
   printf("\n%s %d", sv[i].tensv, sv[i].diem);
  }
 }
}