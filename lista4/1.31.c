/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  double soma = 0;
  int quant_termos;
  printf("Insira a quantidade de termos para calcular a serie: ");
  scanf("%d", &quant_termos);
  for (int i = 1; i <= quant_termos; i++)
    soma += 1.0 / pow(i,i);
  printf("O resultado eh: %lf\n", soma);
  return 0;
}
