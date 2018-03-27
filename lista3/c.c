/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO
DECLARE saldo_medio, credito
RECEBA saldo_medio
SE saldo_medio <= 200
  ESCREVA saldo_medio, " " , saldo_medio * 0.1
SENÃO SE saldo_medio > 200 E saldo_medio <= 300
  ESCREVA saldo_medio, " " , saldo_medio * 0.2
SENÃO SE saldo_medio > 300 E <= 400
  ESCREVA saldo_medio, " " , saldo_medio * 0.25
SENÃO SE saldo_medio > 400
  ESCREVA saldo_medio, " " , saldo_medio * 0.3
FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>
#define LIMITE_INFERIOR 200
#define LIMITE_MEIO 300
#define LIMITE_SUPERIOR 400

int main() {
  float saldo_medio;
  printf("Entre com o saldo medio: ");
  scanf("%f", &saldo_medio);
  if (saldo_medio <= LIMITE_INFERIOR) // faixa 1: credito é 10% do saldo_medio
    printf("Seu credito eh: %.2f e seu saldo medio eh: %.2f\n", saldo_medio * 0.1, saldo_medio);
  else if (saldo_medio > LIMITE_INFERIOR && saldo_medio <= LIMITE_MEIO) // faixa 2: credito é 20% do saldo_medio
    printf("Seu credito eh: %.2f e seu saldo medio eh: %.2f\n", saldo_medio * 0.2, saldo_medio);
  else if (saldo_medio > LIMITE_MEIO && saldo_medio <= LIMITE_SUPERIOR) // faixa 3: credito é 25% do saldo_medio
    printf("Seu credito eh: %.2f e seu saldo medio eh: %.2f\n", saldo_medio * 0.25, saldo_medio);
  else if (saldo_medio > LIMITE_SUPERIOR) // faixa 4: credito é 30% do saldo_medio
    printf("Seu credito eh: %.2f e seu saldo medio eh: %.2f\n", saldo_medio * 0.3, saldo_medio);
  else
    printf("Entre com dados validos\n");
  return 0;
}
