/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [str] L3 - Francês é Fresco - Juntar palavras
*/

#include <stdio.h>

int nscanf(char string[], int n) { // recebe uma string ate o primeiro \n.
  int i = 0;
  while ( (string[i] = fgetc(stdin)) != '\n' && i < n)
    i++;
  string[i] = '\0';
  return i;
}

int main() {
  char frase[50];
  int tam_frase;
  tam_frase = nscanf(frase, 50);
  for (int i = 0; i < tam_frase; i++) {
    while (frase[i] == ' ' && frase[i-1] == frase[i+1])
      i += 2;
    fputc(frase[i], stdout);
  }
  return 0;
}
