/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [str] L3 - Identificando Ultrons V2
*/

#include <stdio.h>
#include <ctype.h>

// recebe uma string e a deixa minuscula
int scan_lower(char string[], int n) {
  int i = 0;
  while ( (string[i] = fgetc(stdin)) != '\n' && i < n) {
    string[i] = tolower(string[i]);
    i++;
  }
  string[i] = '\0';
  return i;
}

int checa_elemento(char letra, char string[]) {
  for (int i = 0; string[i] != '\0'; i++) {
  	if (string[i] == letra) {
  	  return 1;
  	}
  }
  return 0;
}

int main() {
  int testes, cont, length;
  char pessoa[26] = "", ultron[26] = "";
  double percent;
  scanf("%d ", &testes);

  for (int i = 0; i < testes; i++) {
    cont = 0;
    scan_lower(ultron, 26);
    length = scan_lower(pessoa, 26);
    for (int j = 0; pessoa[j] != '\0'; j++)
      cont += checa_elemento(pessoa[j], ultron);

    percent = (double) cont / length;

    if (percent == 1)
      fputs("chefe\n", stdout);
    else if (percent > 0.5)
      fputs("ultron\n", stdout);
    else
      fputs("pessoa\n", stdout);

  }
  return 0;
}
