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
