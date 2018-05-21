/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [char] L3 - Identificando elementos
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define STR 1
#define INT 2
#define FLOAT 3

int classifica_palavra (char string[]) { // retorna 1 para str, 2 para int e 3 para float.
  int tem_letra = 0, tem_ponto = 0;
  for (int i = 0; string[i] != '\0'; i++) {
    if (isalpha(string[i])) {
      tem_letra++;
      break;
    }
    else if (string[i] == '.') {
      tem_ponto++;
    }
  }
  if (tem_letra)
    return 1;
  else if (tem_ponto)
    return 3;
  else
    return 2;
}

int nscanf(char string[], int n) { // recebe uma string ate o primeiro \n.
  int i = 0;
  while ( (string[i] = fgetc(stdin)) != '\n' && i < n)
    i++;
  string[i] = '\0';
  return i;
}

int main() {
  int objeto;
  char frase[100];
  nscanf(frase, 100);

  for (char *p = strtok(frase, " "); p != NULL; p = strtok(NULL, " ")) {
    objeto = classifica_palavra(p);
    if (objeto == STR)
      fputs("str ", stdout);
    else if (objeto == INT)
      fputs("int ", stdout);
    else
      fputs("float ", stdout);
  }
  return 0;
}
