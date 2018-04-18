/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
*/

#include <stdio.h>

int main() {
  int sum, cases, x, y, i;
  scanf("%d", &cases);
  for (i = 0; i < cases; i++) {
    sum = 0;
    scanf("%d %d", &x, &y);
    if (x > y) {
      x = x + y;
      y = x - y;
      x = x - y;
    }
    x++;
    if (x % 2 == 0)
      x++;
    while (x < y) {
      sum += x;
      x += 2;
    }
    printf("%d\n", sum);
  }
  return 0;
}
