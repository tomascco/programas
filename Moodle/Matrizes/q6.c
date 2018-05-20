/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [mat] Soldados em posição
5 1 9
3 8 4
7 3 2

*/

#include <stdio.h>

int main() {
  int fila[3][3];
  int soldados = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &fila[i][j]);
    }
  }

  for (int j = 0; j < 3; j++) {
    for (int i = 2; i > 0; i--) {
      if (fila[i][j] < fila[i-1][j])
        soldados++;
    }
  }

  printf("%d", soldados);
  return 0;
}
