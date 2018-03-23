/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO
  DECLARE lado NUMERICO
  ESCREVA "Insira o lado do quadrado"
  LEIA lado
  ESCREVA "A area do quadrado eh " , lado * lado
FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  float lado;
  printf("Insira o lado do quadrado: ");
  scanf("%f", &lado);
  printf("A area do quadrado eh: %.2f\n", lado * lado);



  return 0;
}
