/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
*/

#include <stdio.h>

int main() {
  int num_atual, maior = 0;

  while (scanf("%d", &num_atual) == 1) {
    if (num_atual > maior)
      maior = num_atual;
}

  printf("%d", maior);
  return 0;
}
