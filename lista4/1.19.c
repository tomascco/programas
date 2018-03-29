/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  double num;
  printf("Insira um numero para receber seus divisores: ");
  scanf("%lf", &num);
  printf("O numero 1 eh divisor de %0.0lf\n", num);
  for (int i = 2; i <= num / 2 ;i++) {
    if (fmod(num, i) == 0)
      printf("O numero %d eh divisor de %0.0lf\n", i, num);
  }
  printf("O numero %0.0lf eh divisor de %0.0lf\n", num, num);
  return 0;
}
