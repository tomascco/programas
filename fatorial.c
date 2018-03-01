#include <stdio.h>
#include <math.h>

int main() {
  int n, fat = 1, i;
  printf("Insira um numero para calcular seu fatorial: ");
  scanf("%d", &n );
  for (i = 1; i <= n; i++) {
    fat *= i;
}
  printf("Seu numero eh: %d\n", fat);
  return 0;
}
