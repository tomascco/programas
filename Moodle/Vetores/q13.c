/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [vet] L3 - Loucura de Marquinhos - Decompor um inteiro
*/

#include <stdio.h>

long int pot(int a, int b) {
  int produto = 1;
  for (int i = 0; i < b; i++)
    produto *= a;
  return produto;
}

int main() {
  long int numero;
  int quant_alg = 0;
  scanf("%ld", &numero);
  while (pot(10,quant_alg) < numero)
    quant_alg++;
  int v[quant_alg];
  for (int j = 0; j < quant_alg; j++)
    v[j] = (numero % pot(10, j+1)) / pot(10, j);
  for (int j = quant_alg-1; j >= 0; j--)
    printf("%d ", v[j]);
  return 0;
}
