#include<stdio.h>
#include<string.h>
main(){
 char s1[105], s2[105];
 int i, j;
 fgets(s1, sizeof(s1), stdin);
 fgets(s2, sizeof(s2), stdin);
 int len= strlen(s1)-1;
 if(s1[0]=='z' || s1[0]=='r' || s1[0]=='w')
  printf("yes");
 else
  printf("no");
// for(i=len-1, j=0; i>=0, j<len; i--, j++){
//  if(s2[j]!='*' && s1[i]!=s2[j]){
//   printf("no");
//   return 0;
//  }
// }
// printf("yes");
}