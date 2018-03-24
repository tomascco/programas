/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  float ladoA, ladoB, ladoC;
  printf("Insira os 3 lados de um triangulo:\n");
  scanf("%f", &ladoA);
  scanf("%f", &ladoB);
  scanf("%f", &ladoC);
  // da desigualdade triangular temos:
  if (ladoA < ladoB + ladoC && ladoB < ladoA + ladoC && ladoC < ladoA + ladoB) {
    if (ladoA == ladoB && ladoB == ladoC)
      printf("O triangulo eh equilatero\n");
    else if (ladoA != ladoB && ladoB != ladoC && ladoA != ladoC)
      printf("O triangulo eh escaleno\n");
    else
      printf("O triangulo eh isosceles\n");
  }
  else
    printf("Nao eh um triangulo '-'\n");
  return 0;
}
