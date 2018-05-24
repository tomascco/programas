/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [str] L1 - LP da Xura - Inverter String!
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
  char frase[100];
  int tam_frase;
  tam_frase = nscanf(frase, 100) - 1;

  while (tam_frase >=0) {
    fputc(frase[tam_frase], stdout);
    tam_frase--;
  }
  return 0;
}
