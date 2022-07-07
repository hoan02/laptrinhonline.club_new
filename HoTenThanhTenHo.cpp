#include<stdio.h>
#include<string.h>
main(){
 char s[1005];
 fgets(s, sizeof(s), stdin);
 int n=strlen(s)-1, i, v;
 for(i=0; i<n; i++)
  if(s[i] == ' '){
   v=i;
   break;
  }
 for(i=v+1; i<n; i++)
  printf("%c", s[i]);
 printf(" ");
 for(i=0; i<v; i++)
  printf("%c", s[i]);
}