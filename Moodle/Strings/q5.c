/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [char] L1 - Eribelton e a Ascologia V1 - Somar Asc
*/

#include <stdio.h>

int main() {
  char carac;
  int soma = 0;
  while ((carac = fgetc(stdin)) != '\n')
    soma += carac;
  printf("%d", soma % 50);
  return 0;
}
