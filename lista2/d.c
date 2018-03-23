/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO
  DEFINA CONSTANTE_CONVERSAO 1000
  DECLARE peso NUMERICO
  ESCREVA "Insira seu peso em kg"
  LEIA peso
  ESCREVA "Seu peso em gramas eh " , peso * CONSTANTE_CONVERSAO
FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>
#define CONSTANTE_CONVERSAO 1000

int main() {
  float peso;
  printf("\nInsira seu peso em kg: ");
  scanf("%f", &peso);
  printf("Seu peso em gramas eh: %.f\n", peso * CONSTANTE_CONVERSAO);



  return 0;
}
