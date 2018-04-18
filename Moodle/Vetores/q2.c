/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [vet] L2 - Capoeira invertendo vetor!
*/

#include <stdio.h>

int main() {
  int n, i;
  scanf("%d", &n);
  int v[n];
  for (i = 0; i < n; i++)
    scanf("%d", &v[i]);
  while (i > 0) {
    printf("%d ", v[--i]);
  }
  return 0;
}
