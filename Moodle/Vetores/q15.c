/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [vet] L3 - Anfíbios e Batráquios - Está contido
*/

#include <stdio.h>

void preenche_vetor(int n, int v[]) {
  for (int i = 0; i < n; i++)
    scanf("%d", &v[i]);
}

int procura_elemento(int n, int v[], int grito) {
  for (int i = 0; i < n; i++) {
    if (v[i] == grito)
      return i;
  }
  return -1;
}

int main() {
  int n1, n2, falta = 1;
  scanf("%d", &n1);
  int vet1[n1];
  preenche_vetor(n1, vet1);
  scanf("%d", &n2);
  int vet2[n2];
  preenche_vetor(n2, vet2);
  for (int i = 0; i < n1; i++) {
    if (procura_elemento(n2, vet2, vet1[i]) == -1)
      falta = 0;
  }
  if (falta)
    printf("sim");
  else
    printf("nao");
  return 0;
}
