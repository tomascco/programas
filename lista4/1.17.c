/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  int dividendo, divisor, quociente = 0;
  printf("Insira o dividendo: ");
  scanf("%d", &dividendo);
  printf("Insira o divisor: ");
  scanf("%d", &divisor);
  while (dividendo >= divisor) {
    dividendo -= divisor;
    quociente++;
  }
  printf("O resultado da divisao eh: %d\n", quociente);
  return 0;
}
