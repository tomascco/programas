/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  double fatorial = 1;
  int n;
  printf("Insira um numero para calcular seu fatorial: ");
  scanf("%d", &n);
  for (int i = 1; i<= n; i++)
    fatorial *= i;
  printf("Seu fatorial eh: %0.0lf\n", fatorial);
  return 0;
}
