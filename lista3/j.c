/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO
DECLARE numero NUMERICO
RECEBA numero
SE numero % 3 = 0
  ESCREVA "O numero eh multiplo de 3"
SENÃO
  ESCREVA "o numero nao eh multiplo de 3"
FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  int numero;
  printf("Insira um numero: ");
  scanf("%d", &numero);
  if (numero % 3 == 0)
    printf("O numero eh multiplo de 3\n");
  else
    printf("O numero nao eh multiplo de 3\n");
  return 0;
}
