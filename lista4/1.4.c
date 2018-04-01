/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  int n;
  printf("Digite o numero de potencias de 2 que voce quer: ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    printf("a potencia de dois eh: %d\n", 1 << i);
  return 0;
}
