#include<stdio.h>
#include<stdlib.h>

void nhap(int m, int n, int **a)
{
 *a = (int *)malloc(m*n*sizeof(int));
 for (int i = 0; i < m; i++)
  for (int j = 0; j < n; j++) scanf("%d", *a + i*n + j);
}

void congMaTran(int *a, int *b, int m, int n)
{
 for (int i = 0; i < m; i++)
 {
  for (int j = 0; j < n; j++) printf("%d ", *(a + i*n + j) + *(b + i*n + j));
  printf("\n");
 }
}

int main()
{
 int m, n;
 scanf("%d%d", &m, &n);
 int *a, *b;
 nhap(m, n, &a);
 nhap(m, n, &b);
 congMaTran(a, b, m, n);
 return 0;
}