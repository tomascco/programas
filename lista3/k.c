/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  int numero;
  printf("Insira um numero: ");
  scanf("%d", &numero);
  if (numero % 5 == 0)
    printf("O numero eh divisivel por 5\n");
  else
    printf("O numero nao eh divisivel por 5\n");
  return 0;
}
