#include<stdio.h>
#include<math.h>

int main(){
 long n,a[10];
 
 scanf("%ld",&n);
 a[1] = n / 100;
 a[2] = (n % 100) / 50;
 a[3] = ((n % 100) % 50) / 20;
 a[4] = (((n % 100) % 50) % 20) / 10;
 a[5] = ((((n % 100) % 50) % 20) % 10) / 5;
 a[6] = (((((n % 100) % 50) % 20) % 10) % 5) / 2;
 a[7] = ((((((n % 100) % 50) % 20) % 10) % 5) % 2) / 1;
 
 printf("%ld",n);
 printf("\n%ld to R$ 100,00",a[1]);
 printf("\n%ld to R$ 50,00",a[2]);
 printf("\n%ld to R$ 20,00",a[3]);
 printf("\n%ld to R$ 10,00",a[4]);
 printf("\n%ld to R$ 5,00",a[5]);
 printf("\n%ld to R$ 2,00",a[6]);
 printf("\n%ld to R$ 1,00",a[7]);
 
}