/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO
  DEFINA FATOR_DESCONTO 0.9
  DECLARE preco NUMERICO
  ESCREVA "Insira o preco do produto"
  LEIA preco
  ESCREVA "O preco com desconto eh ", FATOR_DESCONTO * preco
  FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>
#define FATOR_DESCONTO 0.9

int main() {
  float preco;
  printf("\nInsira o preco do produto: ");
  scanf("%f", &preco);
  printf("\nO preco com desconto eh: %.2f", FATOR_DESCONTO * preco);



  return 0;
}
