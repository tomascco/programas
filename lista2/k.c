#include <stdio.h>
#include <math.h>
#define ILUMINACAO_POR_METRO 18

int main() {
  float largura, comprimento, area;
  printf("Insira a largura do comodo: ");
  scanf("%f", &largura);
  printf("Insira o comprimento do comodo: ");
  scanf("%f", &comprimento);
  area = largura * comprimento;
  printf("Seu comodo tem %.2f de area e precisara de %.2f W de iluminacao\n", area, area * ILUMINACAO_POR_METRO);
  return 0;
}
