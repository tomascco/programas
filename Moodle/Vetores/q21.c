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

int rotacao_circular(int n_elem, int pos, int quant_rot) {
  for (int i = 0; i < quant_rot; i++) {
    pos++;
    if (pos == n_elem+1)
      pos = 1;
  }
  return pos;
}

int main() {
  int n, x;
  scanf("%d %d", &n, &x);
  printf("%d", rotacao_circular(n, vencedor(n), x-1));
  return 0;
}
