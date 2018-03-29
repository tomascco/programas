/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  int a, b, mdc; // numeros para qual o mdc vai ser calculado
  printf("Insira um numero: ");
  scanf("%d", &a);
  printf("Insira outro numero: ");
  scanf("%d", &b);
    if (a > b) {
      for (int i = 1; i <= b; i++) {
        if (a % i == 0 && b % i == 0)
          mdc = i;
      }
    }
    else {
      for (int i = 1; i <= a; i++) {
        if (a % i == 0 && b % i == 0)
          mdc = i;
      }
    }
  printf("O maior divisor comum dos numeros %d e %d eh: %d\n", a, b, mdc);
  return 0;
}
