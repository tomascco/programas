/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [str] L3 - Jack Sparrow e o Beijinho - Alternar Case
*/

#include <stdio.h>
#include <ctype.h>

int nscanf(char string[], int n) {
 int i = 0;
 while ( (string[i] = fgetc(stdin)) != '\n' && i < n)
   i++;
 string[i] = '\0';
 return i;
}

int main() {
  int casos, j;
  char texto[100] = "";
  scanf("%d ", &casos);

  for (int i = 0; i < casos; i++) {
    nscanf(texto, 100);
    // fflush(stdin);
    if (islower(texto[0]))
      j = 0;
    else
      j = 1;
    for (int k = 0; texto[k] != '\0'; k++) {
      if (isalpha(texto[k])) {
        if (j % 2)
          texto[k] = toupper(texto[k]);
        else
          texto[k] = tolower(texto[k]);
        j++;
      }
    }
    printf("%s\n", texto);
  }



  return 0;
}
