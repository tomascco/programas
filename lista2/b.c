#include <stdio.h>
#include <math.h>
#define FATOR_DESCONTO 0.9
int main() {
  float preco;
  printf("\nInsira o preco do produto: ");
  scanf("%f", &preco);
  printf("\nO preco com desconto eh: %.2f", FATOR_DESCONTO * preco);



  return 0;
}
