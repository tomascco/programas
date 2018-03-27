/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  double numero_de_erros;
  for (float i = 0; i < 26; i++) // i é igual a quantidade de programas a serem feitos.
    numero_de_erros = pow(2, i);
  printf("O numero de erros esperado para o ultimo programa eh: %0.0lf\n", numero_de_erros);
  return 0;
}
