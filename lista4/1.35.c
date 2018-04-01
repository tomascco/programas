/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  double exponencial = 0, argumento, fatorial = 1;
  printf("Insira um argumento para calcular a exponencial: ");
  scanf("%lf", &argumento);
  exponencial += 1;
  for (int i = 1; i < 15; i++) {
    fatorial *= i;
    exponencial += pow(argumento, i) / fatorial;
  }
  printf("A exponencial eh: %lf\n", exponencial);
return 0;
}
