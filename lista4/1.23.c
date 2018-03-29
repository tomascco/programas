/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  int quant_termos;
  long double anterior, ant_anterior, atual;
  printf("Insira a quantidade de termos n para ser gerada a sequencia Ricci: ");
  scanf("%d", &quant_termos);
  if (quant_termos < 3)
    printf("Insira uma quantidade de termos valida\n");
  else {
    printf("Insira os dois primeiros termos da sequencia (separados por espaço): ");
    scanf("%Lf", &ant_anterior);
    scanf("%Lf", &anterior);
    printf("O termo 1 eh: %0.0Lf\nO termo 2 eh: %0.0Lf\n", ant_anterior, anterior);
      for (int i = 3; i <= quant_termos; i++) {
        atual = ant_anterior + anterior;
        ant_anterior = anterior;
        anterior = atual;
        printf("O termo %d eh: %0.0Lf\n", i, atual);
      }
  }
  return 0;
}
