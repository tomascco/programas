/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [char] L3 - Eribelton e a Ascologia V3 - Busca do mínimo
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

int calcula_n_asc(char string[]) { // calcula o num ascologico de uma string
  int soma = 0;
  for (int i = 0; string[i] != '\0'; i++) {
    soma += string[i];
  }
  return soma % 50;
}


int main() {
  int n_asc;
  char palavra[50];
  nscanf(palavra, 50);

  n_asc = calcula_n_asc(palavra);
  printf("%d\n%s", n_asc, palavra);

  if (islower(100 - n_asc))
    printf("%c\n0", 100 - n_asc);
  else if (islower(150 - n_asc))
    printf("%c\n0", 150 - n_asc);
  else if (n_asc < 16)
    printf("a\n%d", (n_asc + 'a') % 50);
  else
    printf("z\n%d", (n_asc + 'z') % 50);

  return 0;
}
