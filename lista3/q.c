/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO
DECLARE argumento NUMERICO
RECEBA argumento
SE argumento <= 1
  ESCREVA 1
SENÃO SE argumento > 1 E argumento <= 2
  ESCREVA 2
SENÃO SE argumento > 2 E argumento <= 3
  ESCREVA argumento * argumento
SENÃO
  ESCREVA argumento * argumento * argumento
FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  float argumento;
  printf("Insira um argumento para calcular f: ");
  scanf("%f", &argumento);
  if (argumento <= 1)
    printf("f(%.2f) = 1\n", argumento);
  else if (argumento > 1 && argumento <= 2)
    printf("f(%.2f) = 2\n", argumento);
  else if (argumento > 2 && argumento <= 3)
    printf("f(%.2f) = %.2f\n", argumento, argumento * argumento);
  else
    printf("f(%.2f) = %.2f\n", argumento, argumento * argumento * argumento);
  return 0;
}
