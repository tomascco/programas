#include <stdio.h>
#include <math.h>
// definindo as cotacoes:
#define DOLAR 3.95
#define MARCO_ALEMAO 4.25
#define LIBRA_ESTERLINA 5.80

int main() {
  float dinheiro;
  printf("Insira a quantidade de dinheiro a ser levada na viagem: ");
  scanf("%f", &dinheiro);
  printf("Esse valor em dolares eh: %.2f\n", dinheiro * DOLAR);
  printf("Esse valor em marcos alemaes eh: %.2f\n", dinheiro * MARCO_ALEMAO);
  printf("Esse valor em libras esterlinas eh: %.2f\n", dinheiro * LIBRA_ESTERLINA);

  return 0;
}
