/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [str] L2 - Meu cachorro comeu minha tarefa - Retirar espaços
*/

#include <stdio.h>

// recebe uma string ate o primeiro \n.
int nscanf(char string[], int n) {
 int i = 0;
 while ( (string[i] = fgetc(stdin)) != '\n' && i < n)
   i++;
 string[i] = '\0';
 return i;
}

int main() {
  char frase[100];
  nscanf(frase, 100);

  for (int i = 0; frase[i] != '\0'; i++) {
    while (frase[i] == ' ' && frase[i+1] == ' ')
      i++;
    fputc(frase[i], stdout);
  }
  return 0;
}
