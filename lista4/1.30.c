/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  long double soma = 0;
  soma += 1;
  for (int i = 1; i <= 99; i++)
    soma += pow(-1, i) / (2.0 * i);
  printf("O resultado eh: %Lf\n", soma);
  return 0;
}
