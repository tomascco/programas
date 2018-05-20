/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [str] L3 - MeU WoRd QuEbRoU - Formatação de Case!
*/

#include <stdio.h>
#include <ctype.h>

void nscanf(char string[], int n) { // recebe uma string ate o primeiro \n.
  int i = 0;
  while ( (string[i] = fgetc(stdin)) != '\n' && i < n)
    i++;
  string[i] = '\0';
}

int main() {
  char texto[100];
  char operacao;
  nscanf(texto, 100);
  operacao = fgetc(stdin);

  if (operacao == 'M') {
    for (int i = 0; texto[i] != '\n'; i++) {
      if (islower(texto[i])) {
        texto[i] = toupper(texto[i]);
      }
    }
  }

  else if (operacao == 'm') {
    for (int i = 0; texto[i] != '\n' ; i++) {
      if (isupper(texto[i])) {
        texto[i] = tolower(texto[i]);
      }
    }
  }

  else if (operacao == 'p') {
    if (texto[1] == ' ') {
      texto[0] = tolower(texto[0]);
    }
    for (int i = 2; texto[i] != '\n'; i++) {
      if (texto[i-1] == ' ' && islower(texto[i+1]))
        texto[i] = toupper(texto[i]);
      else
        texto[i] = tolower(texto[i]);
    }
  }

  else if (operacao == 'i') {
    for (int i = 0; texto[i] != '\n'; i++) {
      if (islower(texto[i])) {
        texto[i] = toupper(texto[i]);
      }
      else if (isupper(texto[i])) {
        texto[i] = tolower(texto[i]);
      }
    }
  }
  printf("%s", texto);
  return 0;
}
