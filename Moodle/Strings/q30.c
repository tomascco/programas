/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema:
*/

#include <stdio.h>
#include <ctype.h>

int nscanf(char string[], int n) { // recebe uma string ate o primeiro \n.
  int i = 0;
  while ( (string[i] = fgetc(stdin)) != '\n' && i < n)
    i++;
  string[i] = '\0';
  return i;
}

int checa_elemento(char letra, char string[]) { // dada uma string e um simbolo, verifica se o simbolo esta contida nela.
  letra = tolower(letra);
  for (int i = 0; string[i] != '\0'; i++) {
  	if (string[i] == letra) {
  	  return 1;
  	}
  }
  return 0;
}

int main() {
  char frase[100] = "", chute[26] = "", markup;
  nscanf(frase, 100);
  nscanf(chute, 26);
  markup = getchar();

  for (int i = 0; frase[i] != '\0'; i++) {
    if (isalpha(frase[i])) {
      if (!checa_elemento(frase[i], chute))
        frase[i] = markup;
    }
  }
  
  printf("%s", frase);
  return 0;
}
