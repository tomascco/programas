/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO
DECLARE numero NUMERICO
RECEBA numero
SE numero % 5 = 0
  ESCREVA "O numero eh divisivel de 5"
SENÃO
  ESCREVA "o numero nao eh divisivel de 5"
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
