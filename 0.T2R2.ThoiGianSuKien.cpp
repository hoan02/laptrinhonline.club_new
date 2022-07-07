#include <stdio.h>
#include <math.h>

 int main(){
  
  int n1, g1, p1, s1, n2, g2, p2, s2;
  scanf("Ngay %d\n%d : %d : %d", &n1, &g1, &p1, &s1);
  scanf("\nNgay %d\n%d : %d : %d", &n2, &g2, &p2, &s2);
  
  int D, H, M, S;
  S=s2-s1;
  M=p2-p1;
  H=g2-g1;
  D=n2-n1;
  
  if(S<0)
  {
   S+=60;
   M--;
   if (M<0)
   {
    M+=60;
    H--;
    if (H<0)
    {
     H+=24;
     D--;
     printf("%d Ngay\n%d Gio\n%d Phut\n%d Giay", D, H, M, S);
    }
    else
    {
     printf("%d Ngay\n%d Gio\n%d Phut\n%d Giay", D, H, M, S);
    } 
   }
   else
   {
    if (H<0)
    {
     H+=24;
     D--;
     printf("%d Ngay\n%d Gio\n%d Phut\n%d Giay", D, H, M, S);
    }
    else
    {
     printf("%d Ngay\n%d Gio\n%d Phut\n%d Giay", D, H, M, S);
    } 
   }
  }
  
  else
  {
   if (M<0)
   {
    M+=60;
    H--;
    if (H<0)
    {
     H+=24;
     D--;
     printf("%d Ngay\n%d Gio\n%d Phut\n%d Giay", D, H, M, S);
    }
    else
    {
     printf("%d Ngay\n%d Gio\n%d Phut\n%d Giay", D, H, M, S);
    } 
   }
   else
   {
    if (H<0)
    {
     H+=24;
     D--;
     printf("%d Ngay\n%d Gio\n%d Phut\n%d Giay", D, H, M, S);
    }
    else
    {
     printf("%d Ngay\n%d Gio\n%d Phut\n%d Giay", D, H, M, S);
    } 
   }
  }
   
  return 0;
  
 }