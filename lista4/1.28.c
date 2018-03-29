/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  int x;
  long double fatorial = 1, soma = 0;
  printf("Digite o numero x para calcular o somatorio: ");
  scanf("%d", &x);
  soma += x;
    for (int i = 1; i <= 19; i++) {
      fatorial *= i;
      soma += pow(-1,i)*(x / fatorial);
    }
  printf("O resultado da soma eh: %Lf\n", soma);
  return 0;
}
