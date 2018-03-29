/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  double soma;
  double n;
  printf("Digite um numero para calcular a soma: ");
  scanf("%lf", &n);
  for (int i = 0; i < n; i++)
    soma += (1+i) / (n-i);
  printf("O resultado da soma eh: %lf\n", soma);

  return 0;
}
