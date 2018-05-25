/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [str] L3 - Jason e Krueguer - busca de maior ocorrencia
*/

#include <stdio.h>
#include <ctype.h>

int nscanf(char string[], int n) { // recebe uma string ate o primeiro \n.
  int i = 0;
  while ( (string[i] = fgetc(stdin)) != '\n' && i < n)
    i++;
  string[i] = '\0';
  return i;
}

int checa_sequencia(char letra, char string[]) { // dada uma string e um simbolo, verifica se o simbolo esta contida nela.
  for (int i = 0; string[i] != '\0'; i++) {
  	if (string[i] == letra) {
      return 1;
  	}
  }
  return 0;
}

int main() {
  int casos_teste;

  return 0;
}
