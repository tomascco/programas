/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
*/

#include <stdio.h>

int main() {
  int i, v[10];

  for (i = 0; scanf("%d", &v[i]) == 1; i++);

  for (int j = i-1; j >= 0; j--)
    printf("%d ", v[j]);

  return 0;
}
