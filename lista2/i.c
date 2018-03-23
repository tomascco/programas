/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO
  DECLARE ano_atual, ano_nascimento, idade_anos NUMERICO
  ESCREVA "Insira seu ano de nascimento"
  LEIA ano_nascimento
  ESCREVA "Insira o ano atual"
  LEIA ano_atual
  idade_anos ← ano_atual - ano_nascimento
  ESCREVA "Sua idade em anos eh " , idade_anos
  ESCREVA "Sua idade em meses eh " , idade_anos * 12
  ESCREVA "Sua idade em semanas eh " , idade_anos * 52
  ESCREVA "Sua idade em dias eh " , idade_anos * 365
FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  int ano_atual, ano_nascimento, idade_anos;
  printf("Insira seu ano de nascimento: ");
  scanf("%d", &ano_nascimento);
  printf("Insira o ano atual: ");
  scanf("%d", &ano_atual);
  idade_anos = ano_atual - ano_nascimento;
  // considerando o ano com 12 meses, cada ano com 52 semanas e cada ano com 365 dias:
  printf("Sua idade em anos eh: %d", idade_anos);
  printf("\nSua idade em meses eh: %d", idade_anos * 12);
  printf("\nSua idade em semanas eh: %d", idade_anos * 52);
  printf("\nSua idade em dias eh: %d", idade_anos * 365);
  return 0;
}
