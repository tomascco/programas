/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO
DECLARE a, b, c, delta, raizes NUMERICO
RECEBA a, b, c, delta, raizes
delta ← b * b - 4 * a * c
SE delta < 0
  ESCREVA "Não há raizes reais"
SENÃO SE delta = 0
  ESCREVA -b / 2 * a
SENÃO
  INICIO
  raizes ← -b + sqrt(delta) / 2a
  ESCREVA raizes, " "
  raizes ← -b - sqrt(delta) / 2a
  ESCREVA raizes
  FIM
FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  float a, b, c, delta, raizes;
  printf("Insira os coeficientes da equacao: ");
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);
  delta = b * b - 4 * a * c;
  if (delta < 0)
    printf("A equacao nao tem raizes reais\n");
  else if (delta == 0) {
    raizes = (-b) / 2*a;
    printf("A equacao tem raiz com multiplicidade 2 = %.2f\n", raizes);
  }
  else {
    raizes = (-b + sqrt(delta)) / 2*a; // calcula a primeira raiz
    printf("As raizes da equacao sao %.2f e ", raizes);
    raizes = (-b - sqrt(delta)) / 2*a; // calcula a segunda raiz
    printf("%.2f\n", raizes);
  }
  return 0;
}
