#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int mat[n], mina_prox = 0;

  for (int i = 0; i < n; i++) {
    scanf("%d", &mat[i]);
  }

  mina_prox = mat[0] + mat[1];
  printf("%d ", mina_prox);

  for (int i = 1; i < n-1; i++) {
  mina_prox = mat[i-1] + mat[i] + mat[i+1];
  printf("%d ", mina_prox);
  }

  mina_prox = mat[n-2] + mat[n-1];
  printf("%d\n", mina_prox);
  return 0;
}
