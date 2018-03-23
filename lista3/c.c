#include <stdio.h>
#include <math.h>
#define LIMITE_INFERIOR 200
#define LIMITE_MEIO 300
#define LIMITE_SUPERIOR 400

int main() {
  float saldo_medio;
  printf("Entre com o saldo medio: ");
  scanf("%f", &saldo_medio);
  if (saldo_medio < LIMITE_INFERIOR) // faixa 1: credito é 10% do saldo_medio
    printf("Seu credito eh: %.2f\n", saldo_medio * 0.1);
  else if (saldo_medio >= LIMITE_INFERIOR && saldo_medio < LIMITE_MEIO) // faixa 2: credito é 20% do saldo_medio
    printf("Seu credito eh: %.2f\n", saldo_medio * 0.2);
  else if (saldo_medio >= LIMITE_MEIO && saldo_medio <= LIMITE_SUPERIOR) // faixa 3: credito é 25% do saldo_medio
    printf("Seu credito eh: %.2f\n", saldo_medio * 0.25);
  else if (saldo_medio > LIMITE_SUPERIOR) // faixa 4: credito é 30% do saldo_medio
    printf("Seu credito eh: %.2f\n", saldo_medio * 0.3);
  else
    printf("Entre com dados validos\n");
  return 0;
}
