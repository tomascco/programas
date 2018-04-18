/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
*/

#include <stdio.h>

void exibe_vetor(int a, int v[]) {
  int i;
  if (v[0] % 2 == 0) {
    for (i = 0; i < a; i++)
      printf("par[%d] = %d\n", i, v[i]);
  }
  else {
    for (i = 0; i < a; i++)
      printf("impar[%d] = %d\n", i, v[i]);
  }
}

int main() {
  int num_atual, i;
  int par[5], impar[5], num_pares = 0, num_impares = 0;
  for (i = 0; i < 15; i++) {
    scanf("%d", &num_atual);
    if (num_atual % 2 == 0) {
      par[num_pares] = num_atual;
      num_pares++;
    }
    else {
      impar[num_impares] = num_atual;
      num_impares++;
    }
    if (num_pares == 5) {
      exibe_vetor(num_pares, par);
      num_pares = 0;
    }
    if (num_impares == 5) {
      exibe_vetor(num_impares, impar);
      num_impares = 0;
    }
  }
    exibe_vetor(num_impares, impar);
    exibe_vetor(num_pares, par);
  return 0;
}
