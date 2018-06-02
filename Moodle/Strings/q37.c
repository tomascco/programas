/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [str] L4 - Matéria e Antimatéia - Colisão entre palavras!
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
	char palavra1[10] = "", palavra2[10] = "";
	int tam, encontro = 0;
	tam = nscanf(palavra1, 10);
	nscanf(palavra2, 10);

	for (int i = 0; palavra1[tam - i - 1] == palavra2[i]; i++) {
		encontro++;
	}

	for (int i = 0; i < tam - encontro; i++) {
		putc(palavra1[i], stdout);
	}

	for (int i = encontro; palavra2[i] != '\0'; i++) {
		putc(palavra2[i], stdout);
	}
	return 0;
}
