/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  int quant_termos;
  long double anterior = 0, ant_anterior = 1, atual;
  printf("Insira a quantidade de termos n para ser gerada: ");
  scanf("%d", &quant_termos);
    for (int i = 1; i <= quant_termos; i++) {
      atual = ant_anterior + anterior;
      ant_anterior = anterior;
      anterior = atual;
      printf("O termo %d eh: %0.0Lf\n", i, atual);
    }
  return 0;
}
