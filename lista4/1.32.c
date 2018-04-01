/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  double soma = 0;
  for (int i = 0; i < 51; i++)
    soma += pow(-1,i) / pow(2*i + 1, 3);
  printf("Pi eh aproximadamente igual a: %lf\n", pow(soma * 32, 1/3.0));
  return 0;
}
