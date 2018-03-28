/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  int lim_inferior, lim_superior, acumulador = 0;
  printf("Entre com o limite inferior do intervalo: ");
  scanf("%d", &lim_inferior);
  printf("Entre agora com o limite superior do intervalo: ");
  scanf("%d", &lim_superior);
  while(lim_inferior < lim_superior) {
    lim_inferior++;
    if (lim_inferior % 2 == 0) {
      printf("%d eh par\n", lim_inferior);
      acumulador += lim_inferior;
    }
  }
  printf("A soma dos pares desse intervalo eh: %d\n", acumulador);
  return 0;
}
