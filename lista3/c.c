#include <stdio.h>
#include <math.h>
#define LIMITE_INFERIOR 200
#define LIMITE_MEIO 300
#define LIMITE_SUPERIOR 400

int main() {
  float saldo_medio;
  printf("Entre com o saldo medio: ");
  scanf("%f", &saldo_medio);
  if (saldo_medio < LIMITE_INFERIOR)
    printf("Seu credito eh: %.2f\n", saldo_medio * 0.1);
  else if (saldo_medio >= LIMITE_INFERIOR && saldo_medio < LIMITE_MEIO)
    printf("Seu credito eh: %.2f\n", saldo_medio * 0.2);
  else if (saldo_medio >= LIMITE_MEIO && saldo_medio <= LIMITE_SUPERIOR)
    printf("Seu credito eh: %.2f\n", saldo_medio * 0.25);
  else if (saldo_medio > LIMITE_SUPERIOR)
    printf("Seu credito eh: %.2f\n", saldo_medio * 0.3);
  else
    printf("Entre com dados validos\n");
  return 0;
}
