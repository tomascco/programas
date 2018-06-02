/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
*/

#include <stdio.h>

int mult3(int a, int b) {
  if (b == 1)
    return a;
  else
    return a + mult3(a, b-1);
}

int main() {
  int m, n;
  scanf("%d %d", &n, &m);
  printf("%d", mult3(n, m));
  return 0;
}
