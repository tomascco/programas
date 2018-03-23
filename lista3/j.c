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
  switch (numero % 3) {
    case 1 ... 2:
      printf("O numero nao eh multiplo de 3\n");
      break;
    default:
      printf("O numero eh multiplo de 3\n");
      break;
  }
  return 0;
}
