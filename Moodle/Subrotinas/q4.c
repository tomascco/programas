/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
*/

#include <stdio.h>

int sum(int a, int b) {
  for (int i = 0; i < b; i++) {
    a++;
  }
  return a;
}

int mult2(int a, int b) {
  int mult = 0;
  for (int i = 0; i < b; i++) {
    mult += sum(0, a);
  }
  return mult;
}

int main() {
  int m, n;
  scanf("%d %d", &n, &m);
  printf("%d", mult2(n, m));
  return 0;
}
