/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [char] L2 - Eribelton e a Ascologia V2 - Buscando a perfeição
*/

#include <stdio.h>

int nscanf(char string[], int n) { // recebe uma string ate o primeiro \n.
  int i = 0;
  while ( (string[i] = fgetc(stdin)) != '\n' && i < n)
    i++;
  string[i] = '\0';
  return i;
}

int main() {
  char nome[31];
  int n_asc = 0;
  nscanf(nome, 31);

  for (int i = 0; nome[i] != '\0'; i++)
    n_asc += nome[i];
  n_asc %= 50;

  if (n_asc > 3 && n_asc < 28) {
    printf("sem sorte");
  }
  else {
    printf("%s", nome);
    if (n_asc > 0 && n_asc < 4)
      fputc(100 - n_asc, stdout);
    else if (n_asc > 3)
      fputc(150 - n_asc, stdout);
  }

  return 0;
}
