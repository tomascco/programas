/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO
DECLARE altura NUMERICO
DECLARE sexo LITERAL
RECEBA altura, sexo
SE sexo = 'M'
  ESCREVA 72.7 * altura - 58
SENÃO SE sexo = 'F'
  ESCREVA 62.1 * altura - 44.7
SENÃO
  ESCREVA "Escolha uma opcão válida"
FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  float altura;
  char sexo;
  printf("Insira sua altura: ");
  scanf("%f", &altura);
  printf("Entre com seu sexo (M para masculino e F para feminino): ");
  scanf("\n%c", &sexo);
  if (sexo == 'M')
    printf("Seu peso ideal eh: %.2f\n", 72.7 * altura - 58);
  else if (sexo == 'F')
    printf("Seu peso ideal eh: %.2f\n", 62.1 * altura - 44.7);
  else
    printf("Insira um caractere valido, lembrando de colocar M ou F maiusculas!\n");
  return 0;
}
