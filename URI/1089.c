/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
*/
#include <stdio.h>

int main() {
  int peaks, i, n = 1, j;
  while (n != 0) {
    scanf("%d", &n);
    int h[n+2];
    for (i = 0; i < n; i++)
      scanf("%d", &h[i]);
    h[n] = h[0];
    h[n+1] = h[1];
    peaks = 0;
    for (i = 1; i < n+1; i++) {
      if (h[i] > h[i-1] && h[i] > h[i+1])
        peaks++;
      if (h[i] < h[i-1] && h[i] < h[i+1])
        peaks++;
    }
    if (n != 0)
      printf("%d\n", peaks);
  }
  return 0;
}
