#include <iostream>

using namespace std;

int tinh(int d1, int m1, int y1, int d2, int m2, int y2) {
 int t = 0;
 while (y1 <= y2)
 {
  if (y1 == y2 && m1 == m2)
  {
   t += d2 - d1;
   break;
  }
  else
  {
   if (m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10 || m1 == 12) t += 31 - d1;
   if (m1 == 2)
   {
    if (y1 % 4 == 0) t += 29 - d1;
    else t += 28 - d1; 
   }
   if (m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11) t += 30 - d1;
   m1++; d1 = 0;
   if (m1 == 13) 
   {
    m1 = 1;
    y1++;
   }
  } 
 }
 return t;
}

int main() {
 int d1, m1, y1, d2, m2, y2, h = 0, n;
 cin >> n;
 while (n)
 {
  scanf("%d-%d-%d %d-%d-%d", &y2, &m2, &d2, &y1, &m1, &d1);
  h = tinh(d1, m1, y1, d2, m2, y2);
  if (!h) h = tinh(d2, m2, y2, d1, m1, y1);
  cout << h << endl;
  n--;
 }
 return 0;
}