#include <stdio.h>
#include <ctype.h>

int nscanf(char string[], int n) { // recebe uma string ate o primeiro \n.
  int i = 0;
  while ( (string[i] = fgetc(stdin)) != '\n' && i < n)
    i++;
  string[i] = '\0';
  return i;
}

char soma_letras(char op1, char op2, char operacao) {
  char resultado;
  resultado = operacao == '+' ? op1 + op2 - 194 : op1 - op2;
  resultado %= 26;
  return resultado < 0 ? resultado + 26 + 97 : resultado + 97;
  }

int main() {
  int tam_chave;
  char frase[40], chave[20], operacao;
  nscanf(frase, 40);
  tam_chave = nscanf(chave, 20);
  operacao = fgetc(stdin);

  for (int i = 0, j = 0; frase[i] != '\0'; i++) {
    if (isalpha(frase[i])) {
      frase[i] = soma_letras(frase[i], chave[j % tam_chave], operacao);
  	  j++;
  	}
  }
  printf("%s", frase);
  return 0;
}