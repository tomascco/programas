/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  double numero, maior = 0;
  char resposta;
  do {
    printf("Digite um numero: ");
    scanf("%lf", &numero);
    if (numero > maior)
      maior = numero;
    printf("O maior numero digitado ate agora eh: %.2lf\n", maior);
    printf("Deseja digitar outro? (s/n): ");
    scanf("\n%c", &resposta);
  }
  while (resposta == 's');
  return 0;
}
