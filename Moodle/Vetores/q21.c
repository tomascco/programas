/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [vet] L3 - Cabeças vão rolar
*/

#include <stdio.h>

int vencedor(int n_pessoas) {
  if (n_pessoas == 1)
    return 1;
  else if (n_pessoas % 2 == 0)
    return 2 * vencedor(n_pessoas / 2) - 1;
  else if (n_pessoas % 2 == 1)
    return 2 * vencedor((n_pessoas-1) / 2) + 1;
  else
    return -1;
}


int main() {
  int n, x;
  scanf("%d %d", &n, &x);
    printf("%d", (vencedor(n)-1 + (x-1)) % n + 1);
  return 0;
}
