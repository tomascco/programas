/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO
DECLARE tipo_invest, valor_invest NUMERICO
RECEBA tipo_invest, valor_invest
SE tipo_invest = 1
  ESCREVA valor_invest * 1.10
SENÃO SE tipo_invest = 2
  ESCREVA valor_invest * 1.15
SENÃO
  ESCREVA "Escolha uma opção válida"
FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>
#define POUPANCA 1 // rendimento de 10%
#define FUNDO_RENDA_FIXA 2 // rendimento de 15%

int main() {
  int tipo_invest;
  float valor_invest;
  printf("Escolha o seu tipo de investimento:\n1 - Poupanca\n2 - Fundo de renda fixa\n:");
  scanf("%d", &tipo_invest);
  printf("Insira agora o valor do investimento: ");
  scanf("%f", &valor_invest);
  switch (tipo_invest) {
    case POUPANCA:
      valor_invest *= 1.10;
      printf("O valor corrigido do investimento eh: %.2f\n", valor_invest);
      break;
    case FUNDO_RENDA_FIXA:
      valor_invest *= 1.15;
      printf("O valor corrigido do investimento eh: %.2f\n", valor_invest);
      break;
    default:
      printf("A opcao selecionada nao eh valida.\n");
  }
  return 0;
}
