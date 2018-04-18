/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [vet] L1 - Joelison Fernandes - Soma do maior e menor!
*/

#include <stdio.h>

int main() {
  int num_atual, maior = 0, menor = 32767;
  for (int i = 0; i < 5; i++) {
    scanf("%d", &num_atual);
    if (num_atual < menor)
      menor = num_atual;
    if (num_atual > maior)
      maior = num_atual;
  }
  printf("%d\n", maior + menor);
  return 0;
}
