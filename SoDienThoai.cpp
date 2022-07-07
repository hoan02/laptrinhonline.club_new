#include<stdio.h>
#include<string.h>
main() {
 char a[15];
 scanf("%s", a);
 int dem = 0, n=strlen(a), i;
 if(n>10){
     printf("NO");
     return 0;
 }
 for(i=0; i<n; i++){
  if(a[i] <= 47 && a[i] >= 58){
      printf("NO");
      return 0;
  }
 }
 if(a[0] == '0' && a[9] != '0' && a[9] != '4' && a[9] != '7')
  printf("YES");
 else
  printf("NO");
}