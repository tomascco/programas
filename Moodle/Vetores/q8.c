/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [vet] L3 - Exercito - Homens desconcentrados
*/

#include <stdio.h>
#define HOMEM 0

int checa_arredores (int a, int v[]) {
    if (v[a] == HOMEM && v[a-1] == HOMEM && v[a+1] == HOMEM)
      return 1;
  return 0;
}

int main() {
  int n, homens_concentrados = 0;
  scanf("%d", &n);
  int v[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &v[i]);

  // checa as pontas do vetor  por homens concentrados:
  if (v[0] == v[1] && v[0] == HOMEM)
    homens_concentrados++;
  if (v[n-2] == v[n-1] && v[n-2] == HOMEM)
    homens_concentrados++;

  // checa o resto do vetor:
  for (int i = 1; i < n-1; i++)
    homens_concentrados += checa_arredores(i, v);

  printf("%d", homens_concentrados);
  return 0;
}
