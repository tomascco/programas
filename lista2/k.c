/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO
  DEFINA ILUMINACAO_POR_METRO2 18
  DECLARE largura, comprimento, area NUMERICO
  ESCREVA "Insira a largura do comodo"
  LEIA largura
  ESCREVA "Insira o comprimento do comodo"
  LEIA comprimento
  area ← largura * comprimento
  ESCREVA "Seu comodo tem " , area
  ESCREVA " e precisara de ", area * ILUMINACAO_POR_METRO2, " W de iluminacao"
FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>
#define ILUMINACAO_POR_METRO2 18

int main() {
  float largura, comprimento, area;
  printf("Insira a largura do comodo: ");
  scanf("%f", &largura);
  printf("Insira o comprimento do comodo: ");
  scanf("%f", &comprimento);
  area = largura * comprimento;
  printf("Seu comodo tem %.2f de area e precisara de %.2f W de iluminacao\n", area, area * ILUMINACAO_POR_METRO2);
  return 0;
}
