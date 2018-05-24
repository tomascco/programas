/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [str] L2 - Contar Leds
3
115380
2819311
23456

*/

#include <stdio.h>

int nscanf(char string[], int n) { // recebe uma string ate o primeiro \n.
  int i = 0;
  while ( (string[i] = fgetc(stdin)) != '\n' && i < n)
    i++;
  string[i] = '\0';
  return i;
}

int num_leds(char digito) {
  if (digito == '1')
    return 2;
  else if (digito == '2' || digito == '3' || digito == '5')
    return 5;
  else if (digito == '4')
    return 4;
  else if (digito == '6' || digito == '9' || digito == '0')
    return 6;
  else if (digito == '7')
    return 3;
  else
    return 7;
}

int main() {
  int casos_teste, leds;
  char num[10];
  scanf("%d ", &casos_teste);

  for (int cont = 0; cont < casos_teste; cont++) {
    nscanf(num, 10);
    leds = 0;
    for (int i = 0; num[i] != '\0'; i++) {
      leds += num_leds(num[i]);
    }
    printf("%d leds\n", leds);
  }
  return 0;
}
