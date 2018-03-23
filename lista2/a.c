/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO
  DEFINA PESO_NOTA1 2
  DEFINA PESO_NOTA2 3
  DECLARE nota1, nota2 NUMERICO
  ESCREVA "Insira a nota da primeira prova"
  LEIA nota1
  ESCREVA "Insira a nota da segunda prova"
  LEIA nota2
  ESCREVA "Sua media eh: " , (PESO_NOTA1 * nota1 + PESO_NOTA2 * nota2)/(PESO_NOTA1 + PESO_NOTA2)
FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>
#define PESO_NOTA1 2
#define PESO_NOTA2 3

int main() {
  float nota1, nota2;
  printf("\nInsira a nota da primeira prova: ");
  scanf("%f", &nota1);
  printf("Insira a segunda nota: ");
  scanf("%f", &nota2);
  printf("Sua media eh: %.1f",(PESO_NOTA1 * nota1 + PESO_NOTA2 * nota2)/(PESO_NOTA1 + PESO_NOTA2) );

  return 0;
}
