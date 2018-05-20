/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [char] L2 - Somando numeros
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int nscanf(char string[], int n) { // recebe uma string ate o primeiro \n.
  int i = 0;
  while ( (string[i] = fgetc(stdin)) != '\n' && i < n)
    i++;
  string[i] = '\0';
  return i;
}

int main() {
  char *num_atual;
  char frase[100];
  int soma = 0, final, quant_alg;
  final = nscanf(frase, 100);

  for (int i = 0; i < final; i++) {
    if (isdigit(frase[i])) {
      num_atual = &frase[i];
      quant_alg = 1;
      while (isdigit(frase[i+quant_alg]))
        quant_alg++;
      frase[i+quant_alg] = '\0';
      soma += atoi(num_atual);
      i += quant_alg;
    }
  }
  printf("%d", soma);
  return 0;
}
