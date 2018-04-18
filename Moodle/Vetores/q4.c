/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [vet] L3 - Zoo quantas especies!
*/

#include <stdio.h>

void apaga_elemento(int n, int v[], int a) {
  for (int i = 0; i < n; i++) {
    if (v[i] == a)
      v[i] = 0;
  }
}

int main() {
  int n, i, especies = 0;
  scanf("%d", &n);
  int v[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &v[i]);
  for (int j = 0; j < n; j++) {
    if (v[j] != 0) {
    apaga_elemento(n, v, v[j]);
    especies++;
    }
  }
  printf("%d", especies);
  return 0;
}
