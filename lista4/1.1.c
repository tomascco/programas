/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  double acumulador = 1;
  for (int i = 0; i < 20; i++) {
    printf("a potencia de dois eh: %0.0lf\n", acumulador);
    acumulador *= 2;
  }
  return 0;
}
