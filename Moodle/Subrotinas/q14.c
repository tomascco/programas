/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema:
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
  int tam_palavra, palindromo = 1;
  char palavra[15] = "";
  tam_palavra = nscanf(palavra, 15);

  for (int i = 0; i < tam_palavra / 2; i++) {
    if (palavra[i] != palavra[tam_palavra - i - 1]) {
      palindromo = 0;
      break;
    }
  }
  fputc(palindromo + '0', stdout);
  return 0;
}
