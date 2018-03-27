/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  char resposta;
  double acumulado = 1, num;
  do {
    printf("Digite um numero: ");
    scanf("%lf", &num);
    acumulado *= num;
    printf("\nO produto acumulado eh: %.2lf\n", acumulado);
    printf("Voce quer digitar outro numero? (s/n): ");
    scanf("\n%c", &resposta);
  }
 while (resposta == 's');
  return 0;
}
