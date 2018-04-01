/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  int i, j;
  double den = 1, num = 1, x, soma = 0, alternador = 1;
  printf("Insira um x para calcular a sequencia: ");
  scanf("%lf", &x);
  for (i = 1; i<=x; i++) {
    den *= i;
  }
  soma += den;
  printf("O termo 1 eh: %lf\n", den);
  for (j = 0; j < 2*x; j+=2) {
    den /= (x - (j/2));
    alternador *= -1;
    num *= (j+1) * (j+2);
    printf("O termo %d eh: %.10lf\n", 2 + j/2 , alternador*(den/num));
    soma += alternador * (den/num);
  }
  printf("A soma total eh: %0.10lf\n", soma);
  return 0;
}
