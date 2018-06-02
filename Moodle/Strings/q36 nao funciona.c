/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [str] L4 - Mário e o Assassins Creed - Cenário
*/

#include <stdio.h>


int nscanf(char string[], int n) { // recebe uma linha ate o primeiro \n.
  int i = 0;
  while ( (string[i] = fgetc(stdin)) != '\n' && i < n)
    i++;
  string[i] = '\0';
  return i;
}

int main() {
  int comprimento, altura;
  scanf("%d", &comprimento);
  int codigo[comprimento];
  for (int i = 0; i < comprimento; i++)
    scanf("%d", &codigo[i]);


  return 0;
}
