/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [char] L2 - Valdiskley e a cifra V2!
*/

#include <stdio.h>

int main() {
  char operandos[2], operacao, resultado;
  scanf("%c %c %c", &operandos[0], &operacao, &operandos[1]);

  for (int i = 0; i < 2; i++)
    operandos[i] -= 97;

  if (operacao == '+')
    resultado = operandos[0] + operandos[1];
  else if (operacao == '-')
    resultado = operandos[0] - operandos[1];

  resultado %= 26;
  if (resultado < 0) // conserta o comportamendo do % para numeros negativos
    resultado += 26;

  resultado += 97;

  printf("%c", resultado);
  return 0;
}
