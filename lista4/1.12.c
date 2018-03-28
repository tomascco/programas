/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  int lim_superior;
  printf("Entre agora com o limite superior do intervalo: ");
  scanf("%d", &lim_superior);
  for (int i = 1; i <= lim_superior; i++) {
    if (i % 3 == 0)
      printf("%d eh multiplo de 3\n", i);
    if (i % 5 == 0)
      printf("%d eh multiplo de 5\n", i);
  }
  return 0;
}
