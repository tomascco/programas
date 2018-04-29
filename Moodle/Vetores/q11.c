/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [vet] L3 - Jogo do Avesso V2
*/

#include <stdio.h>
#include <stdlib.h>

int procura_elemento(int n, int v[], int grito) {
  for (int i = 0; i < n; i++) {
    if (abs(v[i]) == grito)
      return i;
  }
  return -1;
}

void le_vetor(int n, int v[]) {
  for (int i = 0; i < n; i++)
    scanf("%d", &v[i]);
}

int main() {
  int n_op, n_gritos, pos;
  scanf("%d %d", &n_op, &n_gritos);
  int operarios[n_op], gritos[n_gritos];
  le_vetor(n_op, operarios);
  le_vetor(n_gritos, gritos);
  for (int i = 0; i < n_gritos; i++) {
    pos = procura_elemento(n_op, operarios, gritos[i]);
    if (pos == 0)
      operarios[pos+1] *= -1;
    else if (pos == n_op-1)
      operarios[pos-1] *= -1;
    else if (pos > 0) {
      operarios[pos+1] *= -1;
      operarios[pos-1] *= -1;
    }
  }
  for (int i = 0; i < n_op; i++)
    printf("%d ", operarios[i]);
  return 0;
}
