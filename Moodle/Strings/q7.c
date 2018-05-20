/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [char] L3 - Valdiskley e cifras históricas!
*/

#include <stdio.h>

int nscanf(char string[], int n) { // recebe uma string ate o primeiro \n.
  int i = 0;
  while ( (string[i] = fgetc(stdin)) != '\n' && i < n)
    i++;
  string[i] = '\0';
  return i;
}

int procura_elemento(char string[], int n, char procurando) {
  for (int i = 0; string[i] != '\0' && i < n; i++) {
    if (string[i] == procurando)
      return i;
  }
  return -1;
}

int main() {
  char texto[50], word1[15], word2[15];
  int pos;
  nscanf(texto, 50);
  scanf("%s%s", word1, word2);

  for (int i = 0; texto[i] != '\0'; i++) {
    if ((pos = procura_elemento(word1, 15, texto[i])) != -1)
      texto[i] = word2[pos];
    else if ((pos = procura_elemento(word2, 15, texto[i])) != -1)
      texto[i] = word1[pos];
  }

  printf("%s", texto);
  return 0;
}
