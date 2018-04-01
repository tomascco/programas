/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  int n, num_pares = 0, num_impares = 0, num_atual; // n é o numero de valores a serem considerados
  printf("Digite quantos numeros serao classificados: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    printf("\nInsira o numero: ");
    scanf("%d", &num_atual);
    if (num_atual % 2 == 0)
      num_pares++;
    else
      num_impares++;
  }
  printf("O numero de pares eh: %d\n", num_pares);
  printf("O numero de impares eh: %d\n", num_impares);
  return 0;
}
