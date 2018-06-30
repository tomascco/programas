/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [vet] L2 - Organizando a fila do RU - Separar Pares e Ímpares!
*/

#include <stdio.h>

void exibe_filas(int n, int v[]) {
  for (int a = 1; a >= 0; a--) {
    for (int i = 0; i < n; i++) {
      if (v[i] % 2 == a)
        printf("%d ", v[i]);1
    }
    if (a == 1)
      printf("\n");
  }
}

int main() {
  int n, i;
  scanf("%d", &n);
  int v[n];
  for (i = 0; i < n; i++)
    scanf("%d", &v[i]);
  exibe_filas(n, v);
}
