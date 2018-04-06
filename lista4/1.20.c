/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  int quant_primos, primos_encontrados = 0, i, numero_atual = 3, eh_primo;
  printf("Insira a quantidade de primos a serem gerados: ");
  scanf("%d", &quant_primos);
  printf("2 eh primo\n");
    while (primos_encontrados < quant_primos - 1) {
      eh_primo = 1;
      for (i = 2; i < numero_atual/2; i+=2) {
        if (numero_atual % i == 0) {
            eh_primo = 0;
            break;
        }
      }
      if (eh_primo) {
        primos_encontrados++;
        printf("%d eh primo\n", numero_atual);
      }
      numero_atual++;
    }
  return 0;
}
