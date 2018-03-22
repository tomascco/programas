#include <stdio.h>
#include <math.h>

int main() {
  float Base, base, altura;
  printf("\nInsira a base maior do trapezio: ");
  scanf("%f", &Base);
  printf("Insira a base menor: ");
  scanf("%f", &base);
  printf("Insira a altura: ");
  scanf("%f", &altura);
  printf("A area do trapezio eh: %.2f", (Base + base) * altura * 0.5);
  return 0;
}
