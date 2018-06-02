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

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  printf("%d", sum(n, m));
  return 0;
}
