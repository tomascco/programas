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
  switch (numero % 5) {
    case 1 ... 4:
      printf("O numero nao eh divisivel por 5\n");
      break;
    default:
      printf("O numero eh divisivel por 5\n");
  }



  return 0;
}
