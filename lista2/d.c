#include <stdio.h>
#include <math.h>
#define CONSTANTE_CONVERSAO 1000
int main() {
  float peso;
  printf("\nInsira seu peso em kg: ");
  scanf("%f", &peso);
  printf("Seu peso em gramas eh: %.f\n", peso * CONSTANTE_CONVERSAO);



  return 0;
}
