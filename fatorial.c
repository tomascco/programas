#include <stdio.h>
#include <math.h>

int main() {
  int n, fat = 1, i;
  printf("Insira um numero para calcular seu fatorial: ");
  scanf("%d", &n);
  for (i = 0; i < 2*n; i+=2) {
    fat *= (i+1)*(i+2);
}
  printf("Seu numero eh: %d\n", fat);
  return 0;
}
