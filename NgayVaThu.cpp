#include<stdio.h>
#include<string.h>
main(){
 int q;
 char s[][11]={"thu hai\n", "thu ba\n", "thu tu\n", "thu nam\n", "thu sau\n"
    , "thu bay\n", "chu nhat"};
 char s1[9];
 int i, n, x;
 scanf("%d", &q);
 while(q--){
  fflush(stdin);
  scanf("%d ", &n);
  fgets(s1, sizeof(s1), stdin);
  x = n-(int)(n/7)*7-1;
  for(i=0; i<7; i++){
   if(strcmp(s[i], s1) == 0){
    if(i<x)
     x -= 7;
    printf("%s\n", s[i-x]);
    break;
   }
  }
 }
}