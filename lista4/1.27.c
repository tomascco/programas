/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  double h = 0;
  int n;
  printf("Insira o numero de termos para calcular a soma parcial da serie harmonica: ");
  scanf("%d", &n);
    for (double i = 1; i <= n; i++) {
      h += (1 / i);
    }
  printf("A soma parcial eh: %lf\n", h);


  return 0;
}
