/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [char] L1 - Maiúsculo, Minusculo e Dígito!
*/

#include <stdio.h>
#include <ctype.h>

int main() {
  char carac = fgetc(stdin);
  if (isalpha(carac))
    carac = islower(carac) ? toupper(carac) : tolower(carac);
  printf("%c", carac);
  return 0;
}
