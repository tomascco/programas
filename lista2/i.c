#include <stdio.h>
#include <math.h>

int main() {
  int ano_atual, ano_nascimento, idade_anos;
  printf("Insira seu ano de nascimento: ");
  scanf("%d", &ano_nascimento);
  printf("Insira o ano atual: ");
  scanf("%d", &ano_atual);
  idade_anos = ano_atual - ano_nascimento;
  // considerando o ano com 12 meses, cada mes com 4 semanas e o ano com 365 dias:
  printf("Sua idade em anos eh: %d", idade_anos);
  printf("\nSua idade em meses eh: %d", idade_anos * 12);
  printf("\nSua idade em semanas eh: %d", idade_anos * 12 * 4);
  printf("\nSua idade em dias eh: %d", idade_anos * 365);
  return 0;
}
