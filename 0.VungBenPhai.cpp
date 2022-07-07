#include<stdio.h>
#include<string.h>

int main() {
 float a[12][12];
 char c;
 scanf("%c", &c);
 fflush(stdin);
 float s = 0;
 int dem = 0;
 for (int i = 0; i < 12; i++) {
  for (int j = 0; j < 12; j++) {
   scanf("%f", &a[i][j]);
  }
 }
 if (c == 'S') {
  for (int i = 0; i < 12; i++) {
         for (int j = 6; j < 12; j++) {
       if ((i < 6 && i + j > 11) || (i >= 6 && j > i)) {
        s+=a[i][j];
       }
      }
     }
     printf("%.1f", s);
 }
 else if (c == 'M') {
  for (int i = 0; i < 12; i++) {
         for (int j = 6; j < 12; j++) {
       if ((i < 6 && i + j > 11) || (i >= 6 && j > i)) {
        s+=a[i][j];
        dem++;
       }
      }
     }
  printf("%.1f", (float)s/dem);  
 }
}