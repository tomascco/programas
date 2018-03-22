#include <stdio.h>
#include <math.h>

int main() {
  int numero, i;
  printf("Insira o numero para calcular sua tabuada: ");
  scanf("%d", &numero);
  for (i = 1; i <= 10; i++) {
    printf("%dx%d: %d\n", i, numero, i*numero);
  }



  return 0;
}
