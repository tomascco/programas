#include <stdio.h>
#include <ctype.h>

int nscanf(char string[], int n) { // recebe uma string ate o primeiro \n.
  int i = 0;
  while ( (string[i] = fgetc(stdin)) != '\n' && i < n)
    i++;
  string[i] = '\0';
  return i;
}

int main() {
  char texto[100];
  nscanf(texto, 100);
  for (int i = 0; texto[i] != '\0'; i++) {
  	if (isalpha(texto[i])) {
  	  texto[i] = islower(texto[i]) ? toupper(texto[i]) : tolower(texto[i]);
  	}
  }
  printf("%s", texto);
  return 0;
}