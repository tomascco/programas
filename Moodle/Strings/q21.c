/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [str] L2 - Organizando Ru - Homens e Mulheres!
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
  for (int i = 0; string[i] != '\0'; i++) {
  	if (string[i] == letra) {
  	  return 1;
  	}
  }
  return 0;
}

int main() {
  char frase[100], vogais[] = "aeiou";
  nscanf(frase, 100);

  for (int i = 0; frase[i] != '\0'; i++) {
    if (checa_elemento(frase[i], vogais))
      fputc(frase[i], stdout);
  }
  fputc('\n', stdout);
  for (int i = 0; frase[i] != '\0'; i++) {
    if (!checa_elemento(frase[i], vogais) && frase[i] != ' ')
      fputc(frase[i], stdout);
  }
  return 0;
}
