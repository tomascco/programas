/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  double n, acumulado = 0;
  printf("Insira n para calcular a media dos n primeiros numeros inteiros: ");
  scanf("%lf", &n);
  for (int i = 1; i <= n; i++)
    acumulado += i;
  printf("A media dos n primeiros numeros eh: %.2lf\n", acumulado/n);
  return 0;
}
