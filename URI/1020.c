/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
*/
#include <stdio.h>
#include <math.h>

int main() {
  int entrada, anos, meses, dias;
  scanf("%d", &entrada);
  anos = entrada / 365;
  meses = (entrada % 365) / 30;
  dias = (entrada % 365) % 30;
  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",anos, meses, dias);
  return 0;
}
