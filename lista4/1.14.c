/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  double num1, num2, acumulador = 0; // num1 e num2 são os numeros que serão multiplicados
  printf("Insira um numero para ser multiplicado: ");
  scanf("%lf", &num1);
  printf("Insira seu fator: ");
  scanf("%lf", &num2);
  for (int i = 1; i <= num2; i++)
    acumulador += num1;
  printf("O resultado da multiplicacao eh: %.2lf\n", acumulador);
  return 0;
}
