/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [str] L4 - Conversa de Traficantes - Substituições de substrings
*/

#include <stdio.h>
#include <string.h>

int nscanf(char string[], int n) { // recebe uma linha ate o primeiro \n.
  int i = 0;
  while ( (string[i] = fgetc(stdin)) != '\n' && i < n)
    i++;
  string[i] = '\0';
  return i;
}

int main() {
  char texto[100] = "", palavra[20] = "", substituicao[10] = "";
  char* carac_atual;
  int tam_palavra;
  nscanf(texto, 40);
  tam_palavra = nscanf(palavra, 20);
  nscanf(substituicao, 10);

  for (carac_atual = texto; *carac_atual != '\0'; carac_atual++) {

    if (carac_atual == strstr(carac_atual, palavra)) {
      fputs(substituicao, stdout);
      carac_atual += tam_palavra;
    }
    fputc(*carac_atual, stdout);
  }

  carac_atual = NULL;
  return 0;
}
