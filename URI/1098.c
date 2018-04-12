/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/

#include <stdio.h>

int main() {
  int i,j;
  for (i = 0; i <= 20; i+=2) {
    for (j = 10; j <= 30; j+=10) {
      if (i == 0 || i == 10 || i == 20)
        printf("I=%.0lf J=%.0lf\n", i / 10.0, (j + i) / 10.0);
      else
        printf("I=%.1lf J=%.1lf\n", i / 10.0, (j + i) / 10.0);
    }
  }
  return 0;
}
