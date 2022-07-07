#include<stdio.h>
#include<math.h>
int main () {
 float x,y; 
 scanf ("%f%f", &x, &y);
 if  (x==1) printf ("Tong: R$ %0.2f", 4.00*y); 
 if  (x==2)  printf ("Tong: R$ %0.2f", 4.50*y);
 if  (x==3) printf ("Tong: R$ %0.2f", 5.00*y);
 if  (x==4) printf ("Tong: R$ %0.2f", 2.00*y);
 if  (x==5) printf ("Tong: R$ %0.2f", 1.50*y);  
}