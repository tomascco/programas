/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [str] L2 - Avestruz com Alcaparras - Contar Maiusculas e Minusculas!
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

int main() {
  char frase[100], letra;
  int cont = 0;
  nscanf(frase, 100);
  letra = tolower(fgetc(stdin));

  for (int i = 0; frase[i] != '\0'; i++) {
    if (tolower(frase[i]) == letra)
      cont++;
  }

  printf("%d", cont);
  return 0;
}
