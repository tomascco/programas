/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  double numero_de_erros = 1;
  for (int i = 2; i <= 26; i++) // i é igual a quantidade de programas a serem feitos.
    numero_de_erros *= 2;
  printf("O numero de erros esperado para o ultimo programa eh: %0.0lf\n", numero_de_erros);
  return 0;
}
