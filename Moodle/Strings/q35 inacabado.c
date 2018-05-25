/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [str] L4 - Conversa de Traficantes - Substituições de substrings
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
  char texto[40] = "", palavra[20] = "", substituicao[10] = "";
  int tam_palavra;
  nscanf(texto, 40);
  tam_palavra = nscanf(palavra, 20);
  nscanf(substituicao, 10);

  

  return 0;
}
