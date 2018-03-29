/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  int quant_primos, primos_encontrados = 0, i, numero_atual = 3, divisores;
  printf("Insira a quantidade de primos a serem gerados: ");
  scanf("%d", &quant_primos);
  printf("2 eh primo\n");
    while (primos_encontrados < quant_primos - 1) {
      divisores = 0;
      for (i = 2; i < numero_atual; i++) {
        if (numero_atual % i == 0)
            divisores++;
      }
      if (divisores == 0) {
        primos_encontrados++;
        printf("%d eh primo\n", numero_atual);
      }
      numero_atual++;
    }
  return 0;
}
