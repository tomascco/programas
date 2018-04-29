/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: vet] L4 - Zoologico Entrando na Arca de Noé
*/

#include <stdio.h>
#include <stdlib.h>

int checa_elemento_oposto(int n, int v[], int j) {
  for (int i = 0; i < n; i++) {
    if (v[i] != v[j] && abs(v[i]) == v[j]) {
      v[i] = 0;
      v[j] = 0;
      return 1;
    }
  }
  return 0;
}

int main() {
  int n_ani, n_pares = 0;
  scanf("%d", &n_ani);
  int animais[n_ani];
  for (int i = 0; i < n_ani; i++)
    scanf("%d", &animais[i]);
  for (int i = 0; i < n_ani; i++)
    n_pares += checa_elemento_oposto(n_ani, animais, i);
  printf("%d", n_pares);
  return 0;
}
