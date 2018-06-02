/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
*/

#include <stdio.h>

int main() {
  int n, digito, Mbit = 0; // Mbit é o maior bit do numero
  scanf("%d", &n);

  while (1 << Mbit <= n)
    Mbit++;

  for (int i = (Mbit-1); i >= 0; i--) {
    digito = n & (1 << i) ? 1 : 0;
    fputc(digito + '0', stdout);
  }
  
  return 0;
}
