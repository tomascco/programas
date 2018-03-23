/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO
  DEFINA FATOR_COMISSAO 0.04
  DECLARE vendas, salario, comissao NUMERICO
  ESCREVA "Insira seu salario fixo"
  LEIA salario
  ESCREVA "Insira suas vendas"
  LEIA vendas
  comissao ← vendas * FATOR_COMISSAO
  ESCREVA "Seu salario final eh de ", comissao + salario, " do qual a comissao eh ", comissao
FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>
#define FATOR_COMISSAO 0.04

int main() {
  float vendas, salario, comissao;
  printf("\nInsira seu salario fixo: ");
  scanf("%f", &salario);
  printf("Insira suas vendas: ");
  scanf("%f", &vendas);
  comissao = vendas * FATOR_COMISSAO;
  printf("\nSeu salario final eh de: %.2f, do qual a comissao eh: %.2f", comissao + salario, comissao);

  return 0;
}
