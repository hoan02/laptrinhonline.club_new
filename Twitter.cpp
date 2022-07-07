#include<stdio.h>
#include<string.h>
main(){
 char s[503];
 fgets(s, sizeof(s), stdin);
 int n = strlen(s)-1;
 if(n>140)
  printf("MUTE");
 else
  printf("TWEET");
}