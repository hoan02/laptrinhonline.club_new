#include<stdio.h>
#include<string.h>
main() {
 int dem = 0, i;
 char s[10005];
 fgets(s, sizeof(s), stdin);
 for(i=1; i<strlen(s); i++){
  if(s[i] == s[0])
   dem ++;
 }
 printf("%d", dem);
}