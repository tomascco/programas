/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [vet] L3 - Jogo do Avesso
*/

#include <stdio.h>

int procura_elemento(int n, int v[], int grito) {
  for (int i = 0; i < n; i++) {
    if (v[i] == grito)
      return i;
  }
  return -1;
}

int main() {
  int casos_teste, grito, n, i, pos;
  scanf("%d", &casos_teste);
  for (i = 0; i < casos_teste; i++) {
    scanf("%d %d", &n, &grito);
    int v[n];
    for (int j = 0; j < n; j++)
      scanf("%d", &v[j]);
    pos = procura_elemento(n, v, grito);
    if (pos == 0)
      v[pos+1] *= -1;
    else if (pos == n-1)
      v[pos-1] *= -1;
    else if (pos > 0) {
      v[pos-1] *= -1;
      v[pos+1] *= -1;
    }
    for (int k = 0; k < n; k++)
      if (k == n-1)
        printf("%d", v[k]);
      else
      printf("%d ", v[k]);
    if (i != casos_teste-1)
      printf("\n");
  }
  return 0;
}
