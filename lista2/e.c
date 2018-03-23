/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO
  DECLARE Base, base, altura NUMERICO
  ESCREVA "Insira a base maior do trapezio"
  LEIA Base
  ESCREVA "Insira a base menor"
  LEIA base
  ESCREVA "Insira a altura"
  LEIA altura
  ESCREVA "A area do trapezio eh " , (Base + base) * altura * 0.5
FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  float Base, base, altura;
  printf("\nInsira a base maior do trapezio: ");
  scanf("%f", &Base);
  printf("Insira a base menor: ");
  scanf("%f", &base);
  printf("Insira a altura: ");
  scanf("%f", &altura);
  printf("A area do trapezio eh: %.2f", (Base + base) * altura * 0.5);
  return 0;
}
