/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [char] L3 - Separando tokens
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
  char frase[100];
  nscanf(frase, 100);
  for (char *p = strtok(frase, "#;"); p != NULL; p = strtok(NULL, "#;"))
    printf("%s\n", p);
  return 0;
}
