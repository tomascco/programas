/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [char] L1 - Valdiskey e a cifra V1!
*/

#include <stdio.h>

char rotaciona(char letra, int rotacao) {
  char resultado;
  resultado = (letra + rotacao - 97) % 26;
  return resultado < 0 ? resultado + 26 + 97 : resultado + 97;
  }

int main() {
  char letra;
  int rotacao;
  scanf("%c %d", &letra, &rotacao);
  printf("%c", rotaciona(letra, rotacao));
  return 0;
}
