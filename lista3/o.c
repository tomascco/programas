/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  float ladoA, ladoB, ladoC, lado_maior;
  printf("Insira os 3 lados de um triangulo:\n");
  scanf("%f", &ladoA);
  scanf("%f", &ladoB);
  scanf("%f", &ladoC);
  if (ladoA < ladoB + ladoC && ladoB < ladoA + ladoC && ladoC < ladoA + ladoB) { // checando a existencia do triangulo
    if (ladoA > ladoB && ladoA > ladoC) { // caso ladoA > all
      if (ladoA*ladoA > ladoB*ladoB + ladoC*ladoC)
        printf("O triangulo eh acutangulo\n");
      else if (ladoA*ladoA < ladoB*ladoB + ladoC*ladoC)
        printf("O triangulo eh obtusangulo\n");
      else
        printf("O triangulo eh retangulo\n");
    }
    else if (ladoB > ladoA && ladoB > ladoC) { // caso ladoB > all
      if (ladoB*ladoB > ladoA*ladoA + ladoC*ladoC)
        printf("O triangulo eh acutangulo\n");
      else if (ladoB*ladoB < ladoA*ladoA + ladoC*ladoC)
          printf("O triangulo eh obtusangulo\n");
      else
        printf("O triangulo eh retangulo\n");
    }
    else if (ladoC > ladoA && ladoC > ladoB) { // caso ladoC > all
      if (ladoC*ladoC > ladoA*ladoA + ladoB*ladoB)
        printf("O triangulo eh acutangulo\n");
      else if (ladoC*ladoC < ladoA*ladoA + ladoB*ladoB)
        printf("O triangulo eh obtusangulo\n");
      else
        printf("O triangulo eh retangulo\n");
      }
    else { // caso lados iguais
      printf("O triangulo eh acutangulo\n");
    }
  }
  else
    printf("Isso nao eh um triangulo\n");

  return 0;
}
