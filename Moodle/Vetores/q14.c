/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [vet] L3 - As unhas de Luiza - Vetor para inteiro
*/

#include <stdio.h>

long int pot(int a, int b) {
  int produto = 1;
  if (b == 0)
    return 1;
  for (int i = 0; i < b; i++)
    produto *= a;
  return produto;
}

int main() {
  int quant_alg, numero = 0;
  scanf("%d", &quant_alg);
  int v[quant_alg];
  for (int i = 0; i < quant_alg; i++)
    scanf("%d", &v[i]);
  for (int i = 0; i < quant_alg; i++)
    numero += v[quant_alg-i-1] * pot(10, i);
  printf("%d\n", numero);
  return 0;
}
