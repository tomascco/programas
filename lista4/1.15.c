/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  double base, expoente, acumulador = 1;
  printf("Insira a base: ");
  scanf("%lf", &base);
  printf("Insira seu fator: ");
  scanf("%lf", &expoente);
  for (int i = 0; i < expoente; i++)
    acumulador *= base;
  printf("O resultado da exponenciacao eh: %.2lf\n", acumulador);
  return 0;
}
