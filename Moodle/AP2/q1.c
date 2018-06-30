#include <stdio.h>

int main() {
  int l, c;

  scanf("%d %d", &l, &c);
  int mat[l][c];
  int soma[l];
  int igual = 1;
  for (int i = 0; i < l; i++) {
    for (int j = 0; j < c; j++) {
      scanf("%d", &mat[i][j]);
    }
  }
  for (int i = 0; i < l; i++) {
    for (int j = 0; j < c; j++) {
      soma[i] += mat[i][j];
    }
  }
  for (int i = 0; i < l; i++) {
    if (soma[0] != soma[i]) {
      igual = 0;
      break;
    }
  }
  if (igual)
    fputs("SOMA IGUAL", stdout);
  else
    fputs("SOMA DESIGUAL", stdout);
  return 0;
}
