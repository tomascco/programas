/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO
DECLARE salario NUMERICO
RECEBA salario
SE salario < 900
  ESCREVA salario * 1.3
SENÃO
  ESCREVA salario
FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>
#define LIMITE_REAJUSTE 900
#define FATOR_REAJUSTE 1.3

int main() {
  float salario;
  printf("Entre com o valor do seu salario: ");
  scanf("%f", &salario);
  if (salario < LIMITE_REAJUSTE)
    printf("Seu salario reajustado eh: %.2f\n", salario * FATOR_REAJUSTE);
  else
    printf("Seu salario nao sera reajustado e continuara em: %.2f\n", salario);
  return 0;
}
