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
