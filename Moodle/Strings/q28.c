/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [str] L3 - Amo a Amora meu Amor - Contar Substrings!
*/

#include <stdio.h>
#include <string.h>

int nscanf(char string[], int n) { // recebe uma string ate o primeiro \n.
  int i = 0;
  while ( (string[i] = fgetc(stdin)) != '\n' && i < n)
    i++;
  string[i] = '\0';
  return i;
}

int main() {
  int tam_trecho, cont = 0;
  char frase[60], trecho[10], *substr;
  nscanf(frase, 60);
  tam_trecho = nscanf(trecho, 10);

  substr = frase;
  while ((substr = strstr(substr, trecho)) != NULL) {
    cont++;
    substr += tam_trecho;
  }
  
  printf("%d", cont);
  return 0;
}
