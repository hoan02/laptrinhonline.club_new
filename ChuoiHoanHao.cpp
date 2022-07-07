#include<stdio.h>

int main(){
  char s[101];
  int b[100];
  scanf("%s", &s);

  int n = 0;
  while(s[n] != '\0')
    n++;

  //Xay dung mang b
  for(int i=0; i<n; i++){
    int d = 0;
    for(int j=0; j<n; j++)
      if(s[j] == s[i])
        d++;
    b[i] = d;
  }

  for(int i=0; i<n; i++)
    if(b[i]%2!=0){
      printf("No");
      return 0;
    }

  printf("Yes");
}