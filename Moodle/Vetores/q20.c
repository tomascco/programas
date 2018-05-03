/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [vet] L4 - Coleção de Tazos - Quantos se repetem mais
*/

#include <stdio.h>

int main() {
  int n_ele, rep, maior_rep = 0;
  scanf("%d", &n_ele);
  int tazos[2][n_ele]; // primeira linha recebe o vetor
  for (int i = 0; i < n_ele; i++) // segunda linha guarda o n de repeticoes
    scanf("%d", &tazos[0][i]);

  for (int i = 0; i < n_ele; i++)
    tazos[1][i] = 0;

  for (int i = 0; i < n_ele;) {
    rep = 0;
    while (tazos[0][i] == tazos[0][i+rep]) {
      if (i + rep+1 > n_ele) // grrrrrr
        break;
      rep++;
    }
    tazos[1][i] = rep;
    i += rep;
  }

  for (int i = 0; i < n_ele; i++) {
    if (tazos[1][i] > maior_rep)
      maior_rep = tazos[1][i];
  }
  for (int i = 0; i < n_ele; i++) {
    if (maior_rep == tazos[1][i])
      printf("%d ", tazos[0][i]);
  }
  return 0;
}
