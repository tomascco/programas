/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO
DECLARE ladoA, ladoB, ladoC NUMERICO
RECEBA ladoA, ladoB, ladoC
SE ladoA < ladoB + ladoC E ladoB < ladoA + ladoC E ladoC < ladoA + ladoB
  ESCREVA "Eh um triangulo"
SENÃO
  ESCREVA "Nao eh um triangulo"
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
  if (ladoA < ladoB + ladoC && ladoB < ladoA + ladoC && ladoC < ladoA + ladoB)
    printf("Eh um triangulo mesmo\n");
  else
    printf("nao eh um triangulo, mentiroso.\n");
  return 0;
}
