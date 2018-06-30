#include <stdio.h>

int nscanf(char string[]) {
  int i = 0;
  while ( (string[i] = fgetc(stdin) ) != '\n') {
    i++;
  }
  string[i] = '\0';
  return i;
}

int checa_elemento(char c, char frag[]) {
  for (int i = 0; frag[i] != '\0'; i++) {
    if (frag[i] == c)
      return i;
  }
  return -1;
}

int main() {
  int n, m, pos_atual;
  scanf("%d %d ", &n, &m);
  char letra1[n+1], letra2[n+1];
  letra1[n] = '\0';
  letra2[n] = '\0';
  char frase[50];

  for (int i = 0; i < n; i++) {
    scanf("%c %c ", &letra1[i], &letra2[i]);
  }

  for (int i = 0; i < m; i++) {
    nscanf(frase);
    for (int j = 0; frase[j] != '\0'; j++) {

      if ( (pos_atual = checa_elemento(frase[j], letra1)) != -1 )
        frase[j] = letra2[pos_atual];
      else if ( (pos_atual = checa_elemento(frase[j], letra2)) != -1 )
        frase[j] = letra1[pos_atual];

    }
    printf("%s\n", frase);
  }
  return 0;
}
