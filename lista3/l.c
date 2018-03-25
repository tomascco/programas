/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO
DECLARE numero, divisor NUMERICO
RECEBA numero
SE divisor = 0
  ESCREVA "O divisor nao pode ser 0"
SENÃO SE numero % divisor = 0
  ESCREVA "O numero eh divisivel por ", divisor
SENÃO
  ESCREVA "o numero nao eh divisivel por ", divisor
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
  if (divisor == 0)
    printf("O divisor nao pode ser 0\n");
  else if (numero % divisor == 0)
    printf("O numero %d eh divisivel por %d\n", numero, divisor);
  else
    printf("O numero %d nao eh divisivel por %d\n",numero, divisor);
  return 0;
}
