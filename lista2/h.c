/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO
  DECLARE numero NUMERICO
  ESCREVA "Insira um numero para calcular sua tabuada"
  LEIA numero
  ESCREVA numero, "x1 = ", numero * 1
  ESCREVA numero, "x2 = ", numero * 2
  ESCREVA numero, "x3 = ", numero * 3
  ESCREVA numero, "x4 = ", numero * 4
  ESCREVA numero, "x5 = ", numero * 5
  ESCREVA numero, "x6 = ", numero * 6
  ESCREVA numero, "x7 = ", numero * 7
  ESCREVA numero, "x8 = ", numero * 8
  ESCREVA numero, "x9 = ", numero * 9
  ESCREVA numero, "x10 = ", numero * 10
FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  int numero;
  printf("Insira o numero para calcular sua tabuada: ");
  scanf("%d", &numero);
  printf("%dx1 = %d", numero, 1*numero);
  printf("\n%dx2 = %d", numero, 2*numero);
  printf("\n%dx3 = %d", numero, 3*numero);
  printf("\n%dx4 = %d", numero, 4*numero);
  printf("\n%dx5 = %d", numero, 5*numero);
  printf("\n%dx6 = %d", numero, 6*numero);
  printf("\n%dx7 = %d", numero, 7*numero);
  printf("\n%dx8 = %d", numero, 8*numero);
  printf("\n%dx9 = %d", numero, 9*numero);
  printf("\n%dx10 = %d\n", numero, 10*numero);


  return 0;
}
