/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  int numero, divisor;
  printf("Insira um numero para testar sua divisibilidade: ");
  scanf("%d", &numero);
  printf("Insira o divisor: ");
  scanf("%d", &divisor);
  if (numero % divisor == 0)
    printf("O numero %d eh divisivel por %d\n", numero, divisor);
  else
    printf("O numero %d nao eh divisivel por %d\n",numero, divisor);
  return 0;
}
