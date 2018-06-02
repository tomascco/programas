/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
*/

#include <stdio.h>

int mult(int a, int b) {
  int mult = 0;
  for (int i = 0; i < b; i++)
    mult += a;
  return mult;
}

int main() {
  int m, n;
  scanf("%d %d", &m, &n);
  printf("%d", mult(m, n));
  return 0;
}
