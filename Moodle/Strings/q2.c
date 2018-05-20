/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [char] L1 - Valdiskey e a cifra V1!
*/

#include <stdio.h>

int main() {
  char letra;
  int rotacao, posicao;
  // posicao é a posição da letra numa lista circular
  // considerando a = 0, b = 1, etc.
  scanf("%c %d", &letra, &rotacao);
  posicao = letra + rotacao - 97;
  letra = posicao % 26 + 97;
  if (posicao < 0)
    letra += 26; // o +26 faz o % ficar com o comportamento esperado
  printf("%c", letra);
  return 0;
}
