/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
*/

#include <stdio.h>

double media_altura(int n, double v[]) {
  double soma = 0;
  for (int i = 0; i < n; i++)
    soma += v[i];
  return (soma / n);
}

int main() {
  int n;
  double media;
  scanf("%d", &n);
  double v[n];
  for (int i = 0; i < n; i++)
    scanf("%lf", &v[i]);
  media = media_altura(n, v);
  printf("%.2lf\n", media);
  for (int i = 0; i < n; i++) {
    if (v[i] > media)
      printf("G ");
    else if (v[i] < media)
      printf("P ");
    else
      printf("M ");
  }
  return 0;
}
