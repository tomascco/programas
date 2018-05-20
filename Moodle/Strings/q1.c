/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [char] L1 - Maiúsculo, Minusculo e Dígito!
*/

#include <stdio.h>
#include <ctype.h>

int main() {
  char carac;
  scanf("%c", &carac);
  if (isupper(carac))
    carac = tolower(carac);
  else if (islower(carac))
    carac = toupper(carac);
  printf("%c", carac);
  return 0;
}
