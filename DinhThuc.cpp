#include<stdio.h>
#include<math.h>
void nhap(double a[][100], long long n)
{
 for (long long i = 0; i < n; i++)
 {
  for (long long j = 0; j < n; j++)
   scanf("%lf", &a[i][j]);
 }
}


double tinh(double a[][100], long long n)
{
 long long i, j, k, dem = 0,kt=0;
 double b[100], c[100], h, det = 1;
 for (i = 0; i < n - 1; i++)
 {

  if (a[i][i] == 0)
  {
   for (j = 0; j < n; j++)
   if (a[i][j] != 0)
   {
    for (k = 0; k < n; k++)
    {
     c[k] = a[k][i];
     a[k][i] = a[k][j];
     a[k][j] = c[k];
    }
    dem++;
    kt++;
    break;
   }
   if (kt == 0) return 0;
   
  }
  b[i] = a[i][i];
  for (j = 0; j < n; j++) a[i][j] = a[i][j] / b[i];
  for (j = i + 1; j < n; j++)
  {
   h = a[j][i];
   for (k = 0; k < n; k++) a[j][k] = a[j][k] - h*a[i][k];
  }
 }
 b[n - 1] = a[n - 1][n - 1];
 for (i = 0; i < n; i++) det *= b[i];
 if (dem % 2 == 0) return det; else return -det;
}
int main()
{
 double a[100][100];
 long long n;
 scanf("%lld", &n);
 nhap(a, n);
 printf("%.2lf", tinh(a, n));

}