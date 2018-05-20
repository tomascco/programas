/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <stdlib.h>


int dif_absoluta(int a, int b) {
  return abs(a-b);
}

int calc_soma_elegante(int v[], int n) {
  int k, sum = 0;
  for (k = 0; k < (n-1); k++) {
    sum += dif_absoluta(v[k], v[k+1]);
  }
  return sum;
}

int main() {
  int t, n, i, j;
  scanf("%d", &t);
  for (i = 0; i < t; i++) {
    scanf("%d", &n);
    int a[n];
    for (j = 0; j < n; j++)
      scanf("%d", &a[j]);

  }
  return 0;
}
