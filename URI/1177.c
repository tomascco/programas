/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
*/

#include <stdio.h>

int main() {
  int t, i, j = 0;
  scanf("%d", &t);
  for (i = 0; i < 1000; i++) {
    if (j == t)
    j = 0;
    printf("N[%d] = %d\n", i, j);
    j++;
  }
  return 0;
}
