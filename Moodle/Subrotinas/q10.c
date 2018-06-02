/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
*/

#include <stdio.h>

int main() {
  double num_atual, soma = 0;

  while (scanf("%lf", &num_atual) == 1)
    soma += num_atual;

  printf("%lf", soma);
  return 0;
}
