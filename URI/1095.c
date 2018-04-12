/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  int i = 1, j = 60;
  while (j >= 0) {
    printf("I=%d J=%d\n", i, j);
    i += 3;
    j -= 5;
  }
  return 0;
}
