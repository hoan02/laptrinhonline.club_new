#include<stdio.h>
#include<string.h>
typedef struct{
 char s[150];
 char s2[103];
 int doDai;
 int danhDau;
}chuoi;
main() {
 chuoi xau[1100];
 char kiTu;
 int i, j, dem=0;
 for(i=0;;i++){
  scanf("%s", xau[i].s);
  dem++;
  xau[i].doDai = strlen(xau[i].s);
  scanf("%c", &kiTu);
  if(kiTu == '\n')
   break;
 }
 int n, m=dem;
 dem=0;
 scanf("%d", &n);
 for(i=0; i<n; i++)
  scanf("%s", xau[i].s2);
 for(i=0; i<n; i++){
  for(j=0; j<m; j++){
   if(strcmp(xau[j].s, xau[i].s2) == 0){
    xau[j].danhDau = 1;
   }
  }
 }
 for(i=0; i<=m; i++){
  if(xau[i].danhDau != 1)
   printf("%s", xau[i].s);
  else{
   for(j=0; j<xau[i].doDai; j++)
    printf("*");
  }
  printf(" ");
 }
}