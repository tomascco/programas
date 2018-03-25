/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
*/
#include <stdio.h>
#include <math.h>

int main() {
  float ladoA, ladoB, ladoC, lado_maior, cateto1, cateto2;
  printf("Insira os 3 lados de um triangulo:\n");
  scanf("%f", &ladoA);
  scanf("%f", &ladoB);
  scanf("%f", &ladoC);
  if (ladoA < ladoB + ladoC && ladoB < ladoA + ladoC && ladoC < ladoA + ladoB) { // checando a existencia do triangulo
    if (ladoA > ladoB && ladoA > ladoC) { // caso ladoA > all
      lado_maior = ladoA;
      cateto1 = ladoB;
      cateto2 = ladoC;
    }
    else if (ladoB > ladoA && ladoB > ladoC) { // caso ladoB > all
      lado_maior = ladoB;
      cateto1 = ladoA;
      cateto2 = ladoC;
    }
    else { // caso ladoC > all e o caso ladoA = ladoB = ladoC, no qual nao importa a ordem
      lado_maior = ladoC;
      cateto1 = ladoA;
      cateto2 = ladoB;
    }
    if (lado_maior * lado_maior > cateto1 * cateto1 + cateto2 * cateto2) // checando o angulo do triangulo
      printf("O triangulo eh obtusangulo\n");
    else if (lado_maior * lado_maior < cateto1 * cateto1 + cateto2 * cateto2)
      printf("O triangulo eh acutangulo\n");
    else
      printf("O triangulo eh retangulo\n");
  }
  else
    printf("Isso nao eh um triangulo\n");
  return 0;
}
