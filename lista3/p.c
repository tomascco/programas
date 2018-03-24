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
    if (ladoA > ladoB && ladoA > ladoC) { // caso ladoA > all
      if (ladoA*ladoA == ladoB*ladoB + ladoC*ladoC) // checando se é retangulo
        printf("O triangulo eh retangulo e seus angulos sao 1.57, %.2f, %.2f\n", asin(ladoC / ladoA), asin(ladoB / ladoA));
      else
        printf("O triangulo nao eh retangulo\n");
    }
    else if (ladoB > ladoA && ladoB > ladoC) { // caso ladoB > all
      if (ladoB*ladoB == ladoA*ladoA + ladoC*ladoC) // checando se eh retangulo
        printf("O triangulo eh retangulo e seus angulos sao 1.57, %.2f, %.2f\n", asin(ladoA / ladoB), asin(ladoC / ladoB));
      else
        printf("O triangulo nao eh retangulo\n");
    }
    else // caso ladoC > all
      if (ladoC*ladoC == ladoA*ladoA + ladoB*ladoB) // checando se eh retangulo
        printf("O triangulo eh retangulo e seus angulos sao 1.57, %.2f, %.2f\n", asin(ladoA / ladoC), asin(ladoB / ladoC));
      else
        printf("O triangulo nao eh retangulo\n");
  }
  else
    printf("Nao eh um triangulo\n");
  return 0;
}
