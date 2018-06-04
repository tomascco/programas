#include <stdio.h>

void classifica(int n, int mat[n][4]) {
  for (int j = 1; j < 4; j++) {
    int maior = 0;
    for (int i = 0; i < n; i++) {
      if (mat[i][j] > maior) {
        maior = mat[i][j];
      }
    }
    for (int i = 0; i < n; i++) {
      if (mat[i][j] == maior) {
        mat[i][j] = -1;
      }
    }
  }
}

int procura_empate(int n, int mat[n][4], int med) {
  int cont = 0;
  for (int i = 0; i < n; i++) {
    if (mat[i][med] == -1)
    cont++;
  }
  return cont > 1 ? 1 : 0;
}

int main() {
  int n;
  scanf("%d", &n);
  int mat[n][4];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 4; j++) {
      scanf("%d", &mat[i][j]);
    }
  }

  classifica(n, mat);

  int comp_atual = 1;
  while(procura_empate(n, mat, comp_atual)) {
    comp_atual++;
  }

  if (comp_atual == 4) {
    printf("1");
  }

  else {
    for (int i = 0; i < n; i++) {
      if (mat[i][comp_atual] == -1) {
        printf("%d", mat[i][0]);
      }
    }
  }

  return 0;
}
