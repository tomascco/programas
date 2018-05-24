/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [str] L3 - Rocicleia e o Locioreca - Anagramas!
*/

#include <stdio.h>

int nscanf(char string[], int n) { // recebe uma string ate o primeiro \n.
  int i = 0;
  while ( (string[i] = fgetc(stdin)) != '\n' && i < n)
    i++;
  string[i] = '\0';
  return i;
}

int checa_e_apaga(char letra, char string[]) { // dada uma string e um simbolo, verifica se o simbolo esta contida nela.
  for (int i = 0; string[i] != '\0'; i++) {
  	if (string[i] == letra) {
      string[i] = '0';
  	  return 1;
  	}
  }
  return 0;
}

int main() {
  int anagrama = 1, tam1, tam2;
  char palavra1[20], palavra2[20];
  tam1 = nscanf(palavra1, 20);
  tam2 = nscanf(palavra2, 20);

  for (int i = 0; palavra1[i] != '\0'; i++)
    checa_e_apaga(palavra1[i], palavra2);
  for (int i = 0; palavra2[i] != '\0'; i++) {
    if (palavra2[i] != '0') {
      anagrama = 0;
      break;
    }
  }
  if (anagrama && tam1 == tam2)
    printf("sim");
  else
    printf("nao");
  return 0;
}
