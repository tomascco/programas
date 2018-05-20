/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [mat] Bingo
*/

#include <stdio.h>

int procura_elemento(int procurando, int i, int j, int matriz[i][j]) {
  for (int m = 0; m < i; m++) {
    for (int n = 0; n < j; n++) {
      if (matriz[m][n] == procurando)
        return 1;
    }
  }
  return 0;
}

int main() {
  int sorteados[6];
  int cartela[4][4];
  int achados = 0;

  for (int i = 0; i < 6; i++)
    scanf("%d", &sorteados[i]);
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      scanf("%d", &cartela[i][j]);
    }
  }

  for (int i = 0; i < 6; i++)
    achados += procura_elemento(sorteados[i], 4, 4, cartela);

  printf("%d\n", achados);
  return 0;
}
