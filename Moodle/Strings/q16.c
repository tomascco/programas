/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [str] L2 - Gagueira V1 - Duplicar Palavras
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
  char frase[40], frase_gaga[60] = "";
  nscanf(frase, 100);

  for (char *p = strtok(frase, " "); p != NULL; p = strtok(NULL, " ")) { // sepera as palavras
    for (int i = 0; i < 2; i++) { // repete-se a mesma palavra duas vezes
      strcat(frase_gaga, p);
      strcat(frase_gaga, " ");
    }
  }
  printf("%s", frase_gaga);



  return 0;
}
