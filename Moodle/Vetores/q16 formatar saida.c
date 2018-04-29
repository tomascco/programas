/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [vet] L3 - Baruel Ruel trocando figurinhas!
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
  int album, quant_fig, fig_atual = -1;
  int completo = 1, troca = 1; // flags
  scanf("%d %d", &album, &quant_fig);
  int album_completo[album];
  for (int i = 0; i < album; i++)
    album_completo[i] = 1 + i;
  int fig[quant_fig];
  preenche_vetor(quant_fig, fig);
  for (int i = 0; i < quant_fig; i++) {
    if (fig_atual != fig[i])
      fig_atual = fig[i];
    else {
      troca = 0;
      printf("%d ", fig_atual);
    }
  }
  if (troca)
    printf("N");
  printf("\n");
  for (int i = 0; i < album; i++) {
    if (procura_elemento(quant_fig, fig, album_completo[i]) == -1) {
       completo = 0;
      printf("%d ", album_completo[i]);
    }
  }
  if (completo)
    printf("N");
  return 0;
}
