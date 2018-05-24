/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [str] L3 - Máquina de Datilografar Quebrada
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int nscanf(char string[], int n) { // recebe uma string ate o primeiro \n.
  int i = 0;
  while ( (string[i] = fgetc(stdin)) != '\n' && i < n)
    i++;
  string[i] = '\0';
  return i;
}

int main() {
  char num[100] = "", num_corrigido[100] = "";
  char digito[2];
  nscanf(digito, 2);
  nscanf(num, 100);

  for (char* p = strtok(num, digito); p != NULL; p = strtok(NULL, digito))
    strcat(num_corrigido, p);

  printf("%ld", atol(num_corrigido));
  return 0;
}
