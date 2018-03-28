/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  int dividendo, divisor;
  printf("Insira o dividendo: ");
  scanf("%d", &dividendo);
  printf("Insira o divisor: ");
  scanf("%d", &divisor);
  while (dividendo >= divisor)
    dividendo -= divisor;
  printf("O resto da divisao eh: %d\n", dividendo);
  return 0;
}
