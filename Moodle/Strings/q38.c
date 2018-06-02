/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [str] L4 - Gansos Gamados - Verificar ordenação da frase!
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

int checa_alfabeto(char str1[], char str2[]) {
	int i = 0;
  while (str1[i] == str2[i])
    i++;
  if (str1[i] <= str2[i])
    return 1;
  else
    return 0;
}

int main() {
	char frase[100];
	char* ant;
	char* atual;
	int ordenado = 1;
	nscanf(frase, 100);

	ant = strtok(frase, " ");
	while ( (atual = strtok(NULL, " ")) != NULL) {
		if (!checa_alfabeto(ant, atual)) {
			ordenado = 0;
			break;
		}
		ant = atual;
	}

  if (ordenado)
    fputs("sim", stdout);
  else
    fputs("nao", stdout);

	return 0;
}
