/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  int quant_termos, numero_rep = 3, numero_3 = 1;
  printf("Insira a quantidade de termos para gerar a sequencia\n");
  scanf("%d", &quant_termos);
    for (int i = 0; i < quant_termos; i++) {
      if (i % 3 == 0) {
        printf("O termo %d eh: %d\n", i + 1, numero_3++);
        numero_rep++;
      }
      else
        printf("O termo %d eh: %d\n", i + 1, numero_rep);
    }
return 0;
}
