#include <stdio.h>
#include <string.h>

int nscanf(char string[]) {
  int i = 0;
  while ( (string[i] = fgetc(stdin) ) != '\n') {
    i++;
  }
  string[i] = '\0';
}

int main()                   {
  char string[50] = ""       ;
  char resultado[50] = ""    ;
  nscanf(string)             ;
  return 0                   ;
}
