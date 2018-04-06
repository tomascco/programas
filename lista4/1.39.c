/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  double pop_a = 5, pop_b = 7;
  int ano_atual = 0;
  while (pop_a < pop_b) {
    pop_a *= 1.03;
    pop_b *= 1.02;
    ano_atual++;
  }
  printf("O ano em que a populacao de A ultrapassara B eh: %d\n", ano_atual);
  return 0;
}
