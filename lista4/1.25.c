/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  int quant_termos;
  printf("Insira a quantidade de termos para gerar a sequencia\n");
  scanf("%d", &quant_termos);
  for (int i = 1; i <= quant_termos; i++)
    printf("O termo %d eh: %0.0lf\n", i, pow(i, 2));
  return 0;
}
