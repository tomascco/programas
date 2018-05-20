/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [mat] Quadrado Mágico
*/

#include <stdio.h>

int main() {
  int m[3][3];
  int soma[8] = {0, 0, 0, 0, 0, 0, 0, 0};
  int quadrado = 1;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &m[i][j]);
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        if (i == k)
          soma[k] += m[i][j];
        if (j == k)
          soma[k+3] += m[i][j];
      }
      if (i == j)
        soma[6] += m[i][j];
      if (i + j == 2)
        soma[7] += m[i][j];
    }
  }

  for (int i = 0; i < 7; i++) {
    if (soma[0] != soma[i+1]) {
      quadrado = 0;
      break;
    }
  }
  if (quadrado)
    printf("sim");
  else
    printf("nao");
  return 0;
}
