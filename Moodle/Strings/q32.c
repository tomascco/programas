/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [str] L3 - Aniquilando Ultrons V3
*/

#include <stdio.h>
#include <string.h>

 // recebe uma string ate o primeiro \n.
int nscanf(char string[], int n) {
  int i = 0;
  while ( (string[i] = fgetc(stdin)) != '\n' && i < n)
    i++;
  string[i] = '\0';
  return i;
}
// dada uma string e um simbolo, verifica se o simbolo esta contida nela.
int checa_elemento(char letra, char string[]) {
  for (int i = 0; string[i] != '\0'; i++) {
  	if (string[i] == letra) {
  	  return 1;
  	}
  }
  return 0;
}

int main() {
  char ultron[11] = "", suspeitos[101] = "";
  int cont;
  double percent;
  nscanf(ultron, 11);
  nscanf(suspeitos, 101);

  for (char* p = strtok(suspeitos, " "); p != NULL; p = strtok(NULL, " ")) {
    cont = 0;
    for (int i = 0; p[i] != '\0'; i++)
      cont += checa_elemento(p[i], ultron);

    percent = (double) cont / strlen(p);

    if (percent == 1)
      fputs("chefe ", stdout);
    else if (percent > 0.5)
      fputs("ultron ", stdout);
    else
      fputs("pessoa ", stdout);
  }
  return 0;
}
