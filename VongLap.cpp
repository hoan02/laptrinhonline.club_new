#include<stdio.h>
#include<string.h>
main(){
 char s1[1000003];
 scanf("%s", s1);
 long len=strlen(s1);
 if(len<=9)
  s1[1]='\0';
 else if(len>9 && len<=189)
  s1[2]='\0';
 else if(len>189 && len<=2889)
  s1[3]='\0';
 else if(len>2889 && len<=38889)
  s1[4]='\0';
 else if(len>38889 && len<=488889)
  s1[5]='\0';
 else
  s1[6]='\0';
 printf("%s", s1);
}