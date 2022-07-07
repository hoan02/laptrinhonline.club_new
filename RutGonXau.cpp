#include<stdio.h>
main(){
    int n, i;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s", s);
    printf("%c",s[0]);
    for(i=1; i<n; i++){
      if(s[i-1] != s[i])
  printf("%c",s[i]);
    }
}