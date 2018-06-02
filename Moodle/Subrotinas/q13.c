/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
*/

#include <stdio.h>

int main() {
  int n, num_atual,soma = 0;
  scanf("%d", &n);

  for (int i = 0; i < 4; i++) {
    scanf("%d", &num_atual);
    soma += num_atual;
  }

  for (int i = 0; i < 4-1; i++) {
    fputs("0 ", stdout);
  }

  printf("%d", soma);
  return 0;
}
