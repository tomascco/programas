/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [str] L2 - Numerão Divisível por 11
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
  char num[20];
  int soma = 0, alt = 1;
  nscanf(num, 20);

  for (int i = 0; num[i] != '\0'; i++) {
    soma += alt * (num[i] - '0');
    alt *= -1;
  }

  if (soma % 11 == 0)
    printf("sim");
  else
    printf("nao");
  return 0;
}
